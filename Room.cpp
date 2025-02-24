#include "Room.h"

Room::Room(std::string type) : type(type) {}

std::string Room::getType() {
    return type;
}
