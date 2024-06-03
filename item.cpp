#include "item.h"
#include "entity.h"
using namespace std;
item::item(string n, double w, int d) :name(n), weight(w), damage(d){
    if (n == "Gun"){
        this->type == GUN;
    }else if (n == "Flashlight"){
        this->type == LIGHT;
    }else{
        this->type == KEY;
    }
    switch (type) {
    case KEY:
        key.keyCode = 0;
        break;
    case GUN:
        gun.damage = 10;
        gun.ammo = 30;
        break;
    case LIGHT:
        light.brightness = 100;
        light.batteryLife = 60;
        break;
    }
}

void item::use() {

}
void item::use(Entity* entity) {
    entity->setHealth(entity->getHealth()+this->damage);
}
string item::getName(){
    return this->name;
}
item::item(const item& other) {
    this->name = other.name;
    this->weight = other.weight;
    this->damage = other.damage;
    this->type = other.type;

    switch (this->type) {
    case KEY:
        this->key.keyCode = other.key.keyCode;
        break;
    case GUN:
        this->gun.damage = other.gun.damage;
        this->gun.ammo = other.gun.ammo;
        break;
    case LIGHT:
        this->light.brightness = other.light.brightness;
        this->light.batteryLife = other.light.batteryLife;
        break;
    }
}
