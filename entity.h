#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include "item.h"
#include <vector>
using namespace std;
class Entity
{
private:
    string entityType;
    int health = 100;
    std::vector<item*> inventory;
    int inventorySize = 3;

public:
    Entity(string entityType);
    void setHealth(int damage);
    int getHealth();
    std::vector<std::string> getInventory();
    void addItem(item* itm);
    void attack(item* itm,Entity *entity);
};

#endif // ENTITY_H
