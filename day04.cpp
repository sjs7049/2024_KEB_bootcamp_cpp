#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double r)
        : radius(r){
        cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
    }
    Circle()
        : radius(0.0){
        cout << "기본 생성자가 호출되었습니다." << endl;
    }
    ~Circle(){
        cout << "소멸자가 호출되었씁니다: " << radius << endl;
    }
    Circle(const Circle& circle)
        : radius(circle.radius){
        cout << "복사 생성자가 호출되었습니다." << endl;
    }
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
    Circle circle1(5.2);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl;
    cout << endl;

    Circle circle2(circle1);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    cout << endl;

    Circle circle3;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl;
    cout << endl;

    return 0;
}