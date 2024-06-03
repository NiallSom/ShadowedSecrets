#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include "item.h"
#include <vector>
#include <bitset>
#include <cstdint>
using namespace std;
namespace Ui {
class MainWindow;
}
class Entity
{
    friend class Player;
    friend class Enemy;
protected:
    string entityType;
    int health = 100;
    vector<item*> inventory;
    uint8_t inventorySize = 0b00; //bit structure

public:
    Entity(string entityType);
    virtual ~Entity() {};
    void setHealth(int damage);
    int sumOf(bitset<4> x);
    Entity(const Entity& other); // copy constructor
    virtual void resetInventory();
    int getHealth();
    vector<string> getInventory();
    virtual void attack(Ui::MainWindow *ui, item* itm,Entity *entity) = 0;
    bool isFull();
    string getEntityType();
};

#endif // ENTITY_H
