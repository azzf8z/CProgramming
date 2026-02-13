#include<iostream>
#include<string>
#include<random>

using namespace std;

// create a Route structure (source, destination)
class Route{
    //access specifier (public, private)

    private:
        std:: string source;
        std:: string destination;
        int length;

    //create getters(get function or acessor functions) 
    std::string getSource(){
        return source;
        //call private method
        updateLength();
    }
    
    std::string getDestination() {
        return destination;
        //call private method
        updateLength();
    }

    int getLength(){
        return length;
    }
    //create set methods/setters/mutator functions:
    void setSource(std::string& new_source){
        source = new_source;
    }
    
    void setDestination(std::string& new_destination){
        destination = new_destination;
    }

//create a private method
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

    public:
    //cronstructorsa called when the object is created
    //constructors should be public
    //contructors have no return type (not even void)
    //constructors have the same name as the route
    //create a no argument contructor
    //Route(){
    //    length = 0;
    //}
    
    // no argument contructor (has different syntax)
    //colon provides property name and value
    Route() : source("-"), destination("-"), length(0)

    Route(const std::string& s, const std::string& d){
        setSource(s);
        setDestination(d);
    }
    
        //Define a method
        void print(){
            cout << source << " --> " << destination <<
            ": " << length << " mi commute." << endl;}
    }
}




int main(void) {
    //set the seed of the random
    srand(time(0));
    Route spring_break;
    spring_break.print();

    spring_break.setDestination("Bahamas");
    spring_break.setSource("Lakeland"); 
    spring_break.print();

    //change the destination directly
    spring_break.setDestination("New York"); 
    spring_break.print();

    //create second Route object 
    Route summer_tip("Lakeland", "Tokyo");
    summer_trip.print();

    return 0;
}