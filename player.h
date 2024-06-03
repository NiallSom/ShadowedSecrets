#ifndef PLAYER_H
#define PLAYER_H
#include "entity.h"
using namespace std;
class Player : public Entity{
private:
    int roomID;
public:
    Player(string entityType);
    void setRoomID(int id);
    int getRoomID();
    void attack(Ui::MainWindow *ui, item* itm,Entity *entity) override;
    Player& operator+=(item* itm);
    void resetInventory() override;
};

#endif // PLAYER_H
