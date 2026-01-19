#include<iostream>

using namespace std;

int main(void){

    cout << " Problem 1:\n" << endl;
    cout << "  CCCC" << "    OOOO" << "    PPP " << endl;
    cout << " C" << "       O    O" << "   P  P" << endl;
    cout << "C" << "       O      O" << "  PPP " << endl;
    cout << " C" << "       O    O" << "   P   "<< endl;
    cout << "  CCCC" << "    OOOO" << "    P   " << endl;
     
    cout << "\nProblem 2:\n" << endl;

    string first_name, last_name;

    cout << "Type your first name: " << endl;
    cin >> first_name;
    cout << "Type your last name: " << endl;
    cin >> last_name;
    cout << "First Name: "<< first_name << endl;
    cout << "Last Name: "<< last_name << endl;
    
    int lectures = 3 * (16-1) - 1;
    int minutes = lectures * 50;
    double lecture_seconds = minutes * 60;
    double self_study_secs = 4.5 * 16 * 60 * 60;
    long long total_seconds = lecture_seconds + self_study_secs;

    cout << "I am supposed to spend "<< total_seconds << " seconds studying C++ Programming." << endl;

    return 0;
} 