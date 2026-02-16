#include "Car.hpp"

int main (void) {
    
    //create an object of car class
    Car ferrari;
    
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.getMPG(13.5);
    
    ferrari.print_info();
    
    return 0;
}