#include "room.h"

Room::Room(int ID) : roomID(ID) {}


void Room::setExits(Room* N,Room* E, Room* S, Room* W) {
    this->exits["North"] = N;
    this->exits["East"] = E;
    this->exits["South"] = S;
    this->exits["West"] = W;
}
int Room::getID() {
    return this->roomID;
}
