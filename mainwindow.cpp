#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "room.h"
#include <vector>
#include "loader.h"
#include "player.h"
std::vector<Room*> rooms;
Player player("Player");
loader ldr("C:/Users/Niall/Desktop/C++/ShadowedSecretsBLTD/zorkin-it.json");
std::vector<std::string> btns = ldr.getButtons(player.getRoomID());
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setStyleSheet("background-color: #ffffff; border-radius:5px;");
    QPixmap logo(":/images/MiniZorkLogo.png");
    ui->Title_img->setPixmap(logo);

    QPixmap North(":/images/N.png");
    QPixmap East(":/images/E.png");
    QPixmap South(":/images/S.png");
    QPixmap West(":/images/W.png");

    QPixmap Investigate(":/images/investigate.png");
    QPixmap Pickup(":/images/pickup.png");
    QPixmap Interrogate(":/images/interrogate.png");
    QPixmap Hide(":/images/hide.png");
    QPixmap Open(":/images/open.png");
    QPixmap Hit(":/images/hit.png");
    QPixmap Start(":/images/play-button.png");

    QPixmap Gun(":/images/gun.png");
    QPixmap Flashlight(":/images/flashlight.png");
    QPixmap Key(":/images/key.png");
    ui->Gun->setPixmap(Gun);
    ui->Flashlight->setPixmap(Flashlight);
    ui->key1->setPixmap(Key);
    ui->key2->setPixmap(Key);

    buttonSetup(ui->Start,Start);
    buttonSetup(ui->North,North);
    buttonSetup(ui->East,East);
    buttonSetup(ui->South,South);
    buttonSetup(ui->West,West);

    buttonSetup(ui->Investigate,Investigate);
    buttonSetup(ui->Pickup,Pickup);
    buttonSetup(ui->Interrogate,Interrogate);
    buttonSetup(ui->Hide,Hide);
    buttonSetup(ui->Open,Open);
    buttonSetup(ui->Hit,Hit);



    rooms = ldr.loadRooms();

    qDebug() << rooms[2]->getExit("Hit");
    insertDesc();
    player.addItem(new item("Gun",1,2)); // error is to do with gun it works with item just not gun
    player.addItem(new item("Flashlight",1,2));
    setButtonStates();
}
void MainWindow::insertDesc() {
    qDebug() << rooms[player.getRoomID()]->getDescription();
    ui->plainTextEdit->appendPlainText("\n" + QString::fromStdString(rooms[player.getRoomID()]->getDescription()));
}
void MainWindow::setButtonStates() {
    btns = ldr.getButtons(player.getRoomID());
    QList<QPushButton *> butts = this->findChildren<QPushButton *>();
    for (QPushButton *button : butts){
        if((std::find(btns.begin(),btns.end(),button->objectName().toStdString())) != btns.end() ) {
            button->setEnabled(true);
        }else{
            button->setEnabled(false);
        }
    }
    std::vector<std::string> inventory = player.getInventory();
    QList<QLabel *> labels = this->findChildren<QLabel *>();
    for (QLabel *label: labels){
        qDebug() << label->objectName();
        if (label->objectName() !="Title_img"){
            if( (std::find(inventory.begin(),inventory.end(),label->objectName().toStdString())) != inventory.end()) {
                label->setEnabled(true);
            }else{
                label->setEnabled(false);
            }
        }
    }
}

void MainWindow::buttonSetup(QPushButton *button, QPixmap map) {
    button->setIcon(QIcon(map));
    button->setIconSize(map.size()/4);
    button->setText("");
    button->setStyleSheet("border:0; outline:none;");
    connect(button, &QPushButton::pressed, this, &MainWindow::handleButton);
}
void MainWindow::handleButton() {
    QString senderButton = qobject_cast<QPushButton*>(sender())->objectName();
    if((std::find(btns.begin(),btns.end(),senderButton.toStdString())) != btns.end() ){
        player.setRoomID(rooms[player.getRoomID()]->getExit(senderButton.toStdString()));
    }
    setButtonStates();
    insertDesc();

}

MainWindow::~MainWindow()
{
    delete ui;
}
