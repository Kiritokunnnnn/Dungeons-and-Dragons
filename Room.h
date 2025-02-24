#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    std::string type;
public:
    Room(std::string type);
    std::string getType();
};

#endif
