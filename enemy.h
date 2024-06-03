#ifndef ENEMY_H
#define ENEMY_H
#include "entity.h"

class Enemy : public Entity
{
public:
    Enemy(string entityType);
    void attack(Ui::MainWindow *ui, item* itm,Entity *entity) override;
    Enemy& operator+=(item* itm);
    void resetInventory() override;
};

#endif // ENEMY_H
