#include<iostream>
#include<string>

class Car{

public:
    //no-arg constructor
    Car();

    //to-do: do constructor with arguments

    //get methods
    std::string getMake();
    std::string getModel();
    int getYear();
    double getMPG();

    //set methods
    void Car::setMake(const std::string& make_){
        if(!make_.empty()){
            make = make_;
        };
    }
    void setModel(const std::string& model_){
        if(!model_.empty()){
            model = model_;
        };
    }
    void Car::setYear(int year_){
        year = (year_ > 1900 ? year_ : 1900);
    }
    void Car::setMPG(double mpg_){
        MPG = (mpg_ > 0 ? mpg_ : 0);
    }

    //class methods
    void Car::print_info(){
        std::cout << make << std::endl;
        std::cout << model << std::endl;
        std::cout << year << std:: endl;
        cout << MPG;
    };


private:
    std:: string make;
    std:: string model;
    int year;
    double MPG;
}

Car::Car() {

}

std::string Car::getMake() {
    return make;
}

std::string Car::getModel(){
    return model;
}

int Car::getYear(){
    return year;
}

double Car::getMPG(){
    return MPG;
}

//to-do: add car's mileage, fuel tank capacity, fuel level (current fuel in gallons)
//create 2 methods: 1.) void refuel(double gallons); you can put more than your tank capacity
//create method void drive(double distance);