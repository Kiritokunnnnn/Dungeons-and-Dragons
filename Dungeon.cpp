#include "Dungeon.h"
#include <iostream>

Dungeon::Dungeon() {}

void Dungeon::generateDungeon() {
    rooms.push_back(Room("Empty Room"));
    rooms.push_back(Room("Monster Room"));
    rooms.push_back(Room("Upgrade Room"));
    rooms.push_back(Room("Treasure Room"));
}

void Dungeon::displayRooms() {
    for (auto& room : rooms) {
        std::cout << "Room Type: " << room.getType() << std::endl;
    }
}
