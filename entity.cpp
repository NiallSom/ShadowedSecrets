#include "entity.h"

#include <QDebug>
using namespace std;
Entity::Entity(string entity): entityType(entity){

}
int Entity::sumOf(bitset<4> x){
    int result = 0;
    for (int j=0;j<x.size();j++){
        result += x[j];
    }
    return result;
}

void Entity::setHealth(int health){
    this->health = health;
}
void Entity::resetInventory() {
    this->inventorySize = 0b000;
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
bool Entity::isFull(){
    return false;
}

string Entity::getEntityType() {
    return this->entityType;
}

Entity::Entity(const Entity& other) {
    this->entityType = other.entityType;
    this->health = other.health;
    // Deep copy inventory
    for (item* itm : other.inventory) {
        this->inventory.push_back(new item(*itm));
    }
    this->inventorySize = other.inventorySize;
}
