#include "item.h"
#include "entity.h"

item::item(std::string n, double w, int d) :name(n), weight(w), damage(d){}

void item::use() {

}
void item::use(Entity* entity) {
    entity->setHealth(entity->getHealth()+this->damage);
}
std::string item::getName(){
    return this->name;
}
