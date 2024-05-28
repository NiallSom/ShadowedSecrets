#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;
class Entity;
class item
{
protected:
    string name;
    double weight;
    int damage;
public:
    ~item() {}
    item(string name, double w, int d);
    string getName();
    void use();
    void use(Entity* entity);
};

#endif // ITEM_H
