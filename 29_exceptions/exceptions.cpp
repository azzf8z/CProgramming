#include<iostream>

class Fraction {
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d){

    }
    int quotient (){
        if (den == 0) {
            throw "Cannot divide by zero";
        }
        throw 1;
        
        return num / den;
    }

private:
    int num;
    int den;
};

int main (void) {
    int n1, n2;
    std::cout << "Enter two integers" << std::endl;

    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);
    \
    try {
        std::cout << f1.quotient() << std::endl;
        std::cout << "End of try block \n";
    } catch (const char* ex) {
        std::cout << "Exception was catched: " << ex << std::endl;
    }

    std:: cout << "End of program" << std::endl;
}