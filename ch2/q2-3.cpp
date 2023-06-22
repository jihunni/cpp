#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point* p3 = new Point;
    p3.xpos = p1.xpos + p2.xpos ;
    p3.ypos = p1.ypos + p2.ypos ;

    return p3;
}

int main(void){
    Point& PntAdder(const Point &p1, const Point &p2);
    delete p3;
    return 0;
}