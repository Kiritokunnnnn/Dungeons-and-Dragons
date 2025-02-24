#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Monk.h"
#include "Dungeon.h"

class GameManager {
private:
    Monk player;
    Dungeon dungeon;
public:
    GameManager();
    void startGame();
};

#endif
