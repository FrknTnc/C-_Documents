#include <iostream>
#include "Circle.cpp"


using namespace std;

int main()
{
    Circle circ1;
    circ1.setRadius(5);

    cout << "Radius : " << circ1.getRadius() << endl;
    cout << "Area : " << circ1.getArea() << endl;
    cout << "Perimeter : " << circ1.getPerimeter() << endl;
    cout << "Diameter : " << circ1.getDiameter() << endl;


    return 0;
}
