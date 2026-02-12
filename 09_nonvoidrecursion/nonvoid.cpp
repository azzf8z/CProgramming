#include<iostream>

int power(int base, int exp)

int main(void) {
    
    power(2, 4);
    
    return 0;
}

int power(int base, int exp) {

    if (exp==0) {
        std::cout << "I am power( " << base << ',' << exp << ")\n"<< std::endl;
        std::cout << "The answer is" << 1 <<std::endl;
        return 1;
    }
    std::cout << "I am power( " << base << ',' << exp << ")\n"<< std::endl;
    std::cout << "I know its power " << "*" << "power(" << base << "," << exp <<std::endl;

    int help = power(base, exp-1);
    std::cout << "power(" << base << "," << exp << ") returned me " << help << std::endl;

    return base * help;
}

