/*

*/


#include<iostream>


//create namespace
namespace first{
    int a;
}

namespace second{
    int a;
}


int main(void) {
    first::a = 5;
    second::a = 9;
    
    std::cout << first::a << std::endl; 
    
    std::cout << second::a << std::endl; 
    
}