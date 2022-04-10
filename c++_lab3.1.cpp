#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
    string name;

};

void display(Point p){

    cout<< "x: " << p.x << endl;
    cout<< "x: " << p.y << endl;
    cout<< "x: " << p.name << endl;
}

void display2(Point *p){

    cout<< "x: " << p->x << endl;
    cout<< "x: " << p->y << endl;
    cout<< "x: " << p->name << endl;
}

int main()
{
    // Point point1 = {4,7,"Ali}
    Point point1;

//    point1.x = 4;
//    point1.y = 7;
//    point1.name = "Ali";
//
//    display1(point1);

//     Point points[5];
//    points[0].x = 10;
//
    //Point point1;
    Point *point2 = &point1;
    point2->x = 9;
    // (*point2).x = 1;

    display2(point2);
    return 0;
}

//TEMPLATE YAPISI

//template <typename T>
//T sum(T a, T b){
//    return a+b;
//}
//
//template <typename T, typename U>
//U sum(T a, U b){
//    return a+b;
//}

template <typename T>
class Point{
private:
    T x;
    T y;

public:
    Point(T u, T v){
        x = u;
        y = v;
    }
    T getX(){
        return x;
    }
    void setX(T a){
        x=a;
    }
    T getY
        return Y;
    }
    void setY(T b){
        y=b;
    }
};

int main()
{
    Point<float> point(2.9, 1.3);
    cout << point.getX() << point.getY;
}
//int main()
//{
//    cout << sum<int>(5,9) << endl;
//    cout << sum<double>(5.2 , 9.5) << endl;
//}
