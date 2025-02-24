#ifndef MONSTER_H
#define MONSTER_H

class Monster {
private:
    int health;
    int attackPoints;

public:
    Monster();
    void attack();
    void guard();
    void displayStats();
};

#endif
