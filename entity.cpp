#include "entity.h"
Entity::Entity(string entity): entityType(entity){

}

void Entity::addItem(item* itm){
    this->inventory.push_back(itm);
}

void Entity::setHealth(int health){
    this->health = health;
}

int Entity::getHealth(){
    return this->health;
}
std::vector<std::string> Entity::getInventory(){
    std::vector<std::string> inv;
    for (item* itm: this->inventory){
        inv.push_back(itm->getName());
    }
    return inv;
}

void Entity::attack(item* itm,Entity *entity){
    itm->use(entity);
}

