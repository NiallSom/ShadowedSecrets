#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include <stdint.h>
//#include "room.h"

enum EntitiesDmg {
    PLAYER = 25,
    THE_BF = 100,
    GOBLIN = 50,
    SLIME = 15
};

using namespace std;
class Entity
{
private:
    uint8_t damage; // to ensure damage stays the same for each OS
    string entityType;
public:
    Entity(string entityType, uint8_t damage);
};

#endif // ENTITY_H
