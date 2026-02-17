#include <string>
#include <iostream>
class Car {
public:
// No-arg constructor
Car();
// TODO constructor with arguments
// Get methods
std::string getMake();
std::string getModel();
int getYear();
double getMPG();
// Set methods
void setMake(const std::string& make_);
void setModel(const std::string& model_);
void setYear(int year_);
void setMPG(double MPG_);
// Class methods
void print_info();
private:
std::string make;
std::string model;
int year;
double MPG;
};
/*
TODO
Mileage: car's mileage
Fuel capacity: (fuel tank capacity)
Fuel level: (current fuel in gallons)
void refuel(double gallons);
void drive(double distance);
*/

//to-do: add car's mileage, fuel tank capacity, fuel level (current fuel in gallons)
//create 2 methods: 1.) void refuel(double gallons); you can put more than your tank capacity
//create method void drive(double distance);