#include<iostream>

//abstract class
class Weapon {
public:
//abstract function becauseWeapon we set it equal to zero
    virtual void use() = 0;
};

class Gun : public Weapon {
public:
    void useWeapon(const Gun& gun) override {
        std::cout << "BANG!" << std::endl;
    }
};

class Player{
public:
    void useWeaponWeapon(Weapon& weapon) {
        weapon.useWeapon();
    }


private:

};


class MachineGun : public Gun {
 public:
    MachineGun() : magazine(20) {
 }

    void use() override {
        while(magazine--){
            std::cout << "BANG";
        }
        std::cout << '\n';
        magazine = 20;
}


 private:
    int magazine;
};

class Knive : public Gun {
public:
    void use() override {
        std::cout << "SLASH!" << std::endl;
    }
};

int main(void) {
    Gun gun;
    MachineGun mg;

    mg.use();

    //create array of guns
    Gun* guns[2] = {&gun, &mg};

    for (int i = 0; i<2; i++){
        guns[i]->use();
    }

    Player simple;
    simple.useWeapon(gun);
    simple.useWeapon(mg);
    simple.useWeapon(bazooka);


    return 0;
}

class Bazooka : public Gun {
public:
    std::cout << "BOOM" << std::endl; 
};