#ifndef PLAYER_H
#define PLAYER_H
#include "entity.h"
class Player : public Entity{
private:
    int roomID;
public:
    Player(std::string entityType);
    void setRoomID(int id);
    int getRoomID();
};

#endif // PLAYER_H
