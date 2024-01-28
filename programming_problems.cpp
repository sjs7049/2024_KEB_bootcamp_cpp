// 7-2. int 자료형의 데이터 멤버 x, char 자료형의 데이터 멤버 a를 사용하는 Two라는 클래스를 만드세요.
// 내부에는 멤버 함수로 getX, getA, setX, setA를 정의하세요.

#include <iostream>
using namespace std;

class Two
{
public: 
    Two(int tx, char tA)
    : x(tx), A(tA) {}
    Two()
    : x(0), A('0') {}
    void setX(int tx){ x = tx; }
    void setA(char tA){ A = tA; }
    int getX(){ return x; }
    char getA(){ return A; }
private:
    int x;
    char A;
};

int main()
{
    Two two1;
    Two two2(1, 'a');

    cout << two1.getX() << " " << two1.getA() << endl;
    cout << two2.getX() << " " << two2.getA() << endl;

    two1.setX(4);
    two1.setA('d');
    cout << "\nReset two1" << endl;
    cout << two1.getX() << " " << two1.getA() << endl;

    cout << endl; 
}
