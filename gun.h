#ifndef GUN_H
#define GUN_H
#include <string>
#include "item.h"
#include "entity.h"
class gun : public item {
public:

    using item::use;
    gun(std::string name, double weight,int damage);
    void use(Entity entity);
};

#endif // GUN_H
