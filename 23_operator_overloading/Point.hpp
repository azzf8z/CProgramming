#ifndef POINT_HPP
#define POINT_HPP

class Point {
    Point();

private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0);
    

    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //operator brackets
    int operator[](int index);
    

};

#endif