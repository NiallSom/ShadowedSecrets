#include "player.h"
#include "./ui_mainwindow.h"
using namespace std;


Player::Player(string entityType): Entity(entityType) {
    this->roomID = 0;
    this->inventorySize = 0b0000;
}

Player& Player::operator+=(item* itm) {
    if (this->inventorySize != 0b1111) {
        this->inventorySize = static_cast<uint8_t>(this->inventorySize | 1 << sumOf(bitset<4>(this->inventorySize)));
        inventory.push_back(itm);
    } else {
        qDebug() << "Inventory is full";
    }
    return *this;
}

void Player::setRoomID(int id){
    this->roomID = id;
}
int Player::getRoomID(){
    return this->roomID;
}
void Player::resetInventory(){
    this->inventorySize = 0b0000;
    this->inventory.clear();
}

void Player::attack(Ui::MainWindow *ui, item* itm,Entity *entity){
    ui->plainTextEdit->appendPlainText("You have attacked" + QString::fromStdString(entity->entityType));// making use of the friend class
}
