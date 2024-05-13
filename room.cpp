#include "room.h"
#include "exitnotfoundexception.h"

Room::Room(int ID) : roomID(ID) {}


void Room::setExits(int N,int E, int S,int W) {
    this->exits["North"] = N;
    this->exits["East"] = E;
    this->exits["South"] = S;
    this->exits["West"] = W;
}
int Room::getID() {
    return this->roomID;
}
int Room::getExit(std::string exit){
    if (exits.find(exit) == exits.end()) {
        throw ExitNotFoundException(exit);
    }
    return this->exits[exit];
}
void Room::addEnemy(Entity* entity){
    this->enemies.push_back(entity);
}
void Room::addItem(item* item) {
    this->items.push_back(item);
}
