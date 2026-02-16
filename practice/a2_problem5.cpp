#include<iostream>
#include<string>
#include<vector>

using namespace std;

std::string my_join(const std::vector<std::string>& words, std::string separ){
    
    string result = "";

    for (int i = 0; i < words.size(); i++) {
        
        result += words[i];
            
        if(i != words.size() - 1){
            result+= separ;
        }
    }

    return result;
}


void my_join_comb(vector<string>& words, string separ, int start){

    if (start == (int)words.size()){
        cout << my_join(words, separ) << endl;
        return;
    }

    for (int i = start; i < (int)words.size(); i >= 1; i++) {
        swap(words[start], words[i]);
        my_join_comb(words, separ, start + 1);
        swap(words[start], words[i]);
    }

}

std::string my_join_comb(const std::vector<std::string>& words, std::string separ) {
    string result = "";
    if (words.size() == 0) return result;

    result += words[0];

    for (int i = (int)words.size() - 1; i >= 1; i--) {
        result += separ + words[i];
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
    
    cout << my_join_comb(words, separator) << endl;

    return 0;
}
