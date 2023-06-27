/*
    Incomplete
*/
#include <iostream>
using namespace std;

class Point{
    private:
        int xpos, ypos;
    public:
        void Init(int x, int y){
            xpos = x;
            ypos = y;
        }

        void ShowPointInfo() const {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

class Circle{
    private:
        Point center;
        float radius;
    public:
        void Init(Point point, float radius){
            center = point;
            radius = radius;
        }
        void ShowCircleInfo const {
            cout<<"Center: "<<center.ShowPointInfo()<<"\n"
            <<"Radius: "<<radius<<endl;
        }
};
class Ring{
    private:
        Circle c1;
        Circle c2;
    public:
        void Init(Point point1, float radius1, Point point2, float radius2){
            c1.Init(point1, radius1);
            c2.Init(point2, radius2);
        }
        void ShowRingInfo const{
            cout<<c1.ShowCircleInfo()<<"\n"<<c2.ShowCircleInfo()<<endl;
        }
};

int main(void){
    Point point1;
    Point point2;
    Ring ring;

    point1.Init(1, 1);
    point2.Init(2.2);
    ring.Init(point1, 4, point2, 9);
    ring.ShowRingInfo();
    return 0;
    
    return 0;
}