
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double r)
    : radius(r) {}
    Circle()
    : radius(0.0) {}
    ~Circle() {}
    Circle(const Circle& circle)
    : radius(circle.radius) {}

    void setRadius(double r){
        radius = r;
    }
    double getRadius() const{
        return radius;
    }
    double getPerimeter() const{
        return 2 * 3.14 * radius;
    }
    double getArea() const{
        return 3.14 * radius * radius;
    }
};

int main()
{
    const int size = 3;
    Circle circles[size] = {Circle(3.0), Circle(4.0), Circle(5.0)};

    for(int i = 0; i < size; i++){
        cout << "circle[" << i << "]의 정보" << endl;
        cout << "Radius: " << circles[i].getRadius() << ", Area: " << circles[i].getArea()
            << ", Perimeter: " << circles[i].getPerimeter() << endl;
    }
    return 0;
}