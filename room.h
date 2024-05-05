#ifndef ROOM_H
#define ROOM_H
#include <stdint.h>
#include <map>
#include <vector>
#include <item.h>
using namespace std;
class Room
{
private:
    int roomID;
    Room *room;
    map<string,Room*> exits;
    vector<item> items;
public:
    Room(int roomID);
    void setExits(Room* N,Room* E, Room* S, Room* W);
    void addItem(item item);
    int getID();
};

#endif // ROOM_H
