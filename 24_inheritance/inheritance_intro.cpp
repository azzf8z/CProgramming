#include<iostream>
#include<string>

class Human {
private:
    std:string name;
    int age;

public:
    Human(const std::string, int a =1) : name(n), age(a){

    }
void print() const{
    std::cout << "My name is" << std:endl;

}
};
class Student : public Human {

private:
    std:string name;
    int age;

public:
    Human(const std::string, int a =1) : name(n), age(a){

    }
void print() const{
    std::cout << "My name is" << std:endl;

}
};

int main(void) {
    Human h;

    Student st;


}