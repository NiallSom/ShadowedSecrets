#ifndef ITEM_H
#define ITEM_H
#include <string>

class Entity;
class item
{
protected:
    std::string name;
    double weight;
    int damage;
public:
    ~item() {}
    item(std::string name, double w, int d);
    std::string getName();
    void use();
    void use(Entity* entity);
};

#endif // ITEM_H
