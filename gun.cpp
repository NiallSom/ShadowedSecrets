#include "gun.h"
#include "entity.h"
gun::gun(std::string n,double w,int d) : item(name, weight, damage){
}

void gun::use(Entity& entity){
    entity.setHealth(entity.getHealth()-this->damage);
}
