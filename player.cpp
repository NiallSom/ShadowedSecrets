#include "player.h"

Player::Player(std::string entityType): Entity(entityType) {
    this->roomID = 0;
}
void Player::setRoomID(int id){
    this->roomID = id;
}
int Player::getRoomID(){
    return this->roomID;
}
