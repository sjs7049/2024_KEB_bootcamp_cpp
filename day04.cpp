#include "circle.h"
#include <cassert>

Circle::Circle(double rds)
: radius(rds){
    if(radius < 0.0){
        assert(false);
    }
}

Circle::Circle()
: radius(0.0){

}

Circle::Circle(const Circle& circle)
: radius(circle.radius){

}

Circle::~Circle(){

}

void Circle::setRadius(double r){
    radius = r;
    if(radius < 0.0){
        assert(false);
    }
}

double Circle::getRadius() const{ return radius; }
double Circle::getArea() const{ return 3.14 * radius * radius; }
double Circle::getPerimeter() const{return 2 * 3.14 * radius; }

int main()
{
    Circle circle1(5.2);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    Circle circle2(circle1);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

    Circle circle3;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl << endl;
    return 0;
}