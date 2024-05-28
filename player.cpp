#include "player.h"
using namespace std;
Player::Player(string entityType): Entity(entityType) {
    this->roomID = 0;
}
void Player::setRoomID(int id){
    this->roomID = id;
}
int Player::getRoomID(){
    return this->roomID;
}
