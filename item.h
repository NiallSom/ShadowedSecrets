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
    enum ItemType { KEY, GUN, LIGHT };
    ItemType type;
    item(const item& other);
    union {
        struct {
            int keyCode;
        } key;
        struct {
            int damage;
            int ammo;
        } gun;
        struct {
            int brightness;
            int batteryLife;
        } light;
    };

    ~item() {}
    item(string name, double w, int d);
    string getName();
    void use();
    void use(Entity* entity);
};

#endif // ITEM_H
