#include <iostream>

class Elf {
public:
    Elf(){
        std::cout << "I am Elf!" << std::endl;
    }
    void think() const {
        std::cout<< "Lets not fight!" << std::endl;
    }

};

class Warrior {
public:
    Warrior() {
        std::cout << "I am a Warrior" << std::endl;
    }
    void fight() const {
        std::cout << "Slash!" << std::endl;
    }
};

class ElfWarrior : public Elf, public Warrior {

};

int main (void) {
    ElfWarrior buddy;

    buddy.fight();
    buddy.think();

    return 0;
}