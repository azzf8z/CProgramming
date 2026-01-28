#include<iostream>

using namespace std;
void countdown(int n);


int main(void) {
    
    countdown(100);
    
    return 0;
}

void countdown(int n){
    if (n == 0) {
        return;
    }
    //call the same function
    cout << n << " " << endl;
    countdown(n/2); 
}