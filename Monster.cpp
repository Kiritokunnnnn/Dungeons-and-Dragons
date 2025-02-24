#include "Monster.h"
#include <iostream>

Monster::Monster() : health(10), attackPoints(2) {}

void Monster::attack() {
    std::cout << "Goblin tấn công!" << std::endl;
}

void Monster::guard() {
    health += 1;
    std::cout << "Goblin phòng thủ và hồi 1 HP." << std::endl;
}

void Monster::displayStats() {
    std::cout << "Goblin | HP: " << health << " | Attack: " << attackPoints << std::endl;
}
