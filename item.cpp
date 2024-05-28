#include "item.h"
#include "entity.h"
using namespace std;
item::item(string n, double w, int d) :name(n), weight(w), damage(d){}

void item::use() {

}
void item::use(Entity* entity) {
    entity->setHealth(entity->getHealth()+this->damage);
}
string item::getName(){
    return this->name;
}
