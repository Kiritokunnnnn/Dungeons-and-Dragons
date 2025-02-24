#ifndef DUNGEON_H
#define DUNGEON_H

#include <vector>
#include "Room.h"

class Dungeon {
private:
    std::vector<Room> rooms;
public:
    Dungeon();
    void generateDungeon();
    void displayRooms();
};

#endif
