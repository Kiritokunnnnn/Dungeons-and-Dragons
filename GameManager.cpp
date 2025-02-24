#include "GameManager.h"
#include <iostream>

GameManager::GameManager() : player("Monk Player") {}

void GameManager::startGame()
{
    std::cout << "Game Start!" << std::endl;
    player.displayStats();
    dungeon.generateDungeon();
    dungeon.displayRooms();
}
