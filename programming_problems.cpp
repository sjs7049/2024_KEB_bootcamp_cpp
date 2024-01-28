// 7-6. 다음과 같은 Triangle 클래스 정의
// 데이터 멤버로 firstSide, SecondSide, ThirdSide를 가짐
// 생성자 함수에는 두 변의 합이 다른 변보다 큰지 모두 확인하고, 작은 경우 assert 함수 호출
// 접근자 함수로 getSides, getPerimeter, getArea 만듦
// 둘레: a+b+c, 넓이: sqrt((p)*(p-a)*(p-b)*(p-c)) // p = 둘레/2

#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

int larger(int a, int b, int c){
    int max;
    if(a >= b && a >= c) { max = a; }
    else if(b >= a && b >= c) { max = b; }
    else { max = c; }
    return max;
}

class Triangle
{
public:
    Triangle(int firstside, int secondside, int thirdside)
    : firstSide(firstside), secondSide(secondside), thirdSide(thirdside){
        if(larger(firstside, secondside, thirdside) == firstside){
            if(firstside > (secondside + thirdside)){
                assert(false);
            } 
        }
        else if(larger(firstside, secondside, thirdside) == secondside){
            if(secondside > (firstside + thirdside)){
                assert(false);
            } 
        }
        else if(larger(firstside, secondside, thirdside) == thirdside){
            if(thirdside > (firstside + secondside)){
                assert(false);
            } 
        }
    }
    void getSides() const { 
        cout << "The Three sides are " << firstSide << ", " << secondSide << ", " << thirdSide << endl;
    }
    int getPerimeter() const { return (firstSide + secondSide + thirdSide); }
    double getArea() const {
        double p = (firstSide + secondSide + thirdSide) / 2.0;
        double area = (p*(p - firstSide)*(p - secondSide)*(p - thirdSide));

        return sqrt(area);
    }
private:
    int firstSide, secondSide, thirdSide;
};

int main()
{   
    int a, b, c;
    cout << "Input the three sides: ";
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);
    triangle.getSides();
    cout << "The perimeter of triangle is " << triangle.getPerimeter() << endl;
    cout << "The area of triangle is " << triangle.getArea() << endl;
    return 0;
}