#ifndef POINT_HPP
#define POINT_HPP

class Point {

private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0);
    

    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //arithmetic operator
    Point operator+(const Point& other);

    //operator brackets
    int operator[](int index);
    

};

#endif