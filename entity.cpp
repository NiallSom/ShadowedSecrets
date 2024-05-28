#include "entity.h"
#include <bitset>
#include <QDebug>
using namespace std;
Entity::Entity(string entity): entityType(entity){

}
int sumOf(bitset<4> x){
    int result = 0;
    qDebug() << x.to_string();
    for (int j=0;j<x.size();j++){
        result += x[j];
    }
    return result;
}
void Entity::addItem(item* itm) {
    if (this->inventorySize != 0b1111) {
        this->inventorySize =  bitset<4>(this->inventorySize | 1 << sumOf(bitset<4>(this->inventorySize))).to_ulong();
        qDebug() << bitset<4>(this->inventorySize).to_string();
        this->inventory.push_back(itm);
    }else{
        qDebug() << "Inventory is full";
    }
}

void Entity::setHealth(int health){
    this->health = health;
}
void Entity::resetInventory() {
    this->inventorySize = 0b0000;
    this->inventory.clear();
}
int Entity::getHealth(){
    return this->health;
}
std::vector<string> Entity::getInventory(){
    std::vector<string> inv;
    for (item* itm: this->inventory){
        inv.push_back(itm->getName());
    }
    return inv;
}

void Entity::attack(item* itm,Entity *entity){
    itm->use(entity);
}

bool Entity::isFull(){
    return false;
}
