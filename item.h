#ifndef ITEM_H
#define ITEM_H
#include <stdint.h>
#include "entity.h"
class item
{
private:
    uint8_t weight;
    uint8_t damage;
public:
    item(uint8_t w, uint8_t d);
    void use(item item, Entity entity);
};

#endif // ITEM_H
