#ifndef ITEM_H
#define ITEM_H
#include <string>

class item
{
protected:
    std::string name;
    double weight;
    int damage;
public:
    item(std::string name, double w, int d);
    virtual void use();
};

#endif // ITEM_H
