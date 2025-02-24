#include "Monk.h"
#include <iostream>

Monk::Monk(std::string name) : name(name), health(15), attackPoints(3) {}

void Monk::attack() {
    std::cout << name << " tấn công!" << std::endl;
}

void Monk::guard() {
    health += 1;
    std::cout << name << " phòng thủ và hồi 1 HP." << std::endl;
}

void Monk::meditate() {
    health = 15;
    std::cout << name << " thiền định và hồi phục toàn bộ HP." << std::endl;
}

void Monk::displayStats() {
    std::cout << "Monk: " << name << " | HP: " << health << " | Attack: " << attackPoints << std::endl;
}
