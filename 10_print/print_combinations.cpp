#include<iostream>
#include<string>

using namespace std;

void print_combinations(int n);
void combination_helper(std::string& s, int n, int i);

int main(void) {
    
    int n;
    cout << "enter size" << endl;
    cin >> n;
    
    return 0;
    
}

void print_combinations (int n) {
    std:: string s(n, 'a');
    //call the helper function
    combination_helper(s, n, 0); 
    
}
void combination_helper(std::string& s, int n, int i) {
    //base case
    if(i >= n) {
        std:: cout << s << std::endl;
        return;
    }
    while(s[i] <= 'z'){
        //recursive call for the next character
        combination_helper(s, n, i+1);
        s[i] ++;
    }
    // if letter reaches z, set it to a
    s[i] = 'a';
}
