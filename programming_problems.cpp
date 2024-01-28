// 7-1. int 자료형의 데이터 멤버 x, y와 이러한 데이터 멤버의 접근자 멤버 함수 getX, getY를
// 갖는 One이라는 클래스를 만드세요. 

#include <iostream>
using namespace std;

class One
{
public: 
    One(int ox, int oy)
    : x(ox), y(oy) {}
    One()
    : x(0), y(0) {}
    int getX(){ return x; }
    int gety(){ return y; }
private:
    int x, y;
};

int main()
{
    One one1(3, 4);
    One one2;
    One one3(one1);

    cout << "x = " << one1.getX() << ", y = " << one1.gety() << endl;
    cout << "x = " << one2.getX() << ", y = " << one2.gety() << endl;
    cout << "x = " << one3.getX() << ", y = " << one3.gety() << endl;
    return 0;
}
