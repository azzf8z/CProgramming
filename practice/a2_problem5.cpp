#include<iostream>
#include<string>
#include<vector>

using namespace std;

std::string my_join(const std::vector<std::string>& words, std::string separ){
    string result = "";

    for (int i =0; i < words.size(); i++) {
        result+= words[i];

        if (i != words.size() - 1){
            result += separ;
        }
    }

    return result;
}

int main(void){
    
    vector<string> words;
    string input;

    cout << "Enter strings (\"exit\" to stop)" << endl;

    while (true) {
    cin >> input;
    
    if(input == "exit"){
        break;
    }

    words.push_back(input);
    
    }

    string separator;
    cout << "Enter the separator" << endl;
    cin >> separator;

    cout << my_join(words, separator) << endl;

    return 0;
}