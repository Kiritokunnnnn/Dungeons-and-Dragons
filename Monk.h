#ifndef MONK_H;
#define MONK_H;
#include<string>
using namespace std;

class Monk {
    private:
        string name;
        int health;
        int attackPoints;
    
    public:
        Monk(std::string name);
        void attack();
        void guard();
        void meditate();
        void displayStats();
    };



#endif