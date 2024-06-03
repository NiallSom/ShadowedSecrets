#include "enemy.h"
#include <bitset>
#include <QDebug>
#include "./ui_mainwindow.h"
Enemy::Enemy(string entityType): Entity(entityType) {
    this->inventorySize = 0b00;
}

void Enemy::resetInventory(){
    this->inventorySize = 0b00;
    this->inventory.clear();
}

Enemy& Enemy::operator+=(item* itm) {
    if (this->inventorySize != 0b1111) {
        this->inventorySize = static_cast<uint8_t>(this->inventorySize | 1 << sumOf(bitset<4>(this->inventorySize)));
        this->inventory.push_back(itm);
    } else {
        qDebug() << "Inventory is full";
    }
    return *this;
}

void Enemy::attack(Ui::MainWindow *ui, item* itm,Entity *entity){
    ui->plainTextEdit->appendPlainText("Enemy has attacked a"+ QString::fromStdString(entity->entityType));
}
