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
    std::string description;
    map<string,int> exits;
    vector<item*> items;
    vector<Entity*> enemies;
public:
    Room(int roomID);
    void setExits(int N,int E, int S, int W);
    void addEnemy(Entity* entity);
    void addItem(item* item);
    int getID();
    int getExit(string);
};

#endif // ROOM_H
