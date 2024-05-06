#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <vector>
#include <map>
#include <item.h>
#include <entity.h>
using namespace std;
class Room
{
private:
    int roomID;
    Room *room;
    map<string,Room*> exits;
    vector<item> items;
    vector<Entity> enemies;
public:
    Room(int roomID);
    void setExits(Room* N,Room* E, Room* S, Room* W);
    void addEnemy(Entity);
    void addItem(item item);
    int getID();
};

#endif // ROOM_H
