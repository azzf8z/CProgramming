


#include<iostream>
#include "Point.hpp"

main (void) {

    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(50, 70);
    Point p4 = p1 + p2;

    //compare 2 point. you cannot use an equal operator because there are more argumments.
    //we need to create special method to handle this case.
    if(p1.operator==(p2)){
        std::cout << "Equal\n";
    } else {
        std:: cout << "Not equal\n";
    }
    //or SAME thing
    if(p1 == p2){
        std::cout << "Equal\n";
    } else {
        std:: cout << "Not equal\n";
    }

    if(p1 != p2){
        std::cout << (char) p3[0];
    } else {
        std::cout << (char) p3[1]; 
    }
    p1[0] = 52;
    std::cout << (char) p1[0];

    

    
    return 0;
}