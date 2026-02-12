#include<iostream>

using namespace std;

int evenCount(unsigned int val1){

    if (val1 < 10) {
        
        if (val1 % 2 == 0){
            return 1;
        } else {
            return 0;
        }
    } 

    int last_digit = val1 % 10;
    
    if(last_digit % 2 == 0){
        return 1 + evenCount(val1 / 10);
    } else {
        return evenCount(val1 / 10);
    }
}

int main (void) {

    unsigned int number;

    cout << "Enter the number " << endl;
    cin >> number;

    cout << "The number of even digits is " << evenCount(number) << endl;

    return 0;
}