#include<iostream>
#include<string>

using namespace std;

// create a Route structure (source, destination)
typedef struct{

    //acces specifier (public, private)

    private:
        std:: string source;
        std:: string destination;
        int length;

    //create getters and setters:


    public:
        //define a method
        void print(){
            cout << source << " --> " << destination <<
            ": " << length << " mi commute." << endl;
    }
} Route;




int main(void) {
    
    Route spring_break;

    spring_break.destination = "Bahamas";
    spring_break.source = "Lakeland";
    spring_break.length = 50; 

    //change the destination directly
    spring_break.destination = "New York"; 


    spring_break.print();

    return 0;
}