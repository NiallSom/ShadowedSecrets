#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include "item.h"
#include <vector>
#include <cstdint>
using namespace std;
class Entity
{
protected:
    string entityType;
    int health = 100;
    vector<item*> inventory;
    uint8_t inventorySize = 0b0000; //bit structure

public:
    Entity(string entityType);
    ~Entity() {};
    void setHealth(int damage);
    void resetInventory();
    int getHealth();
    vector<string> getInventory();
    void addItem(item* itm);
    void attack(item* itm,Entity *entity);
    bool isFull();
};

#endif // ENTITY_H
