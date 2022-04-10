#include "Circle.h"

Circle::Circle(){

    radius = 0;
}

Circle::Circle(double rad){

    radius = rad;
}

double Circle::getRadius(){

    return radius;
}

void Circle::setRadius(double rad){

    radius = rad;
}

double Circle::getArea(){

    return pi*radius*radius;
}

double Circle::getDiameter(){

    return 2*radius;
}

double Circle::getPerimeter(){

    return 2*pi*radius;
}
