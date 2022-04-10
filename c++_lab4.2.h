#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

class Circle{
public:
    Circle();
    Circle(double rad);
    double getRadius();
    void setRadius(double rad);
    double getArea();
    double getPerimeter();
    double getDiameter();
private:
    double radius;
    const double pi = 3.14;


};

#endif // CIRCLE_H_INCLUDED
