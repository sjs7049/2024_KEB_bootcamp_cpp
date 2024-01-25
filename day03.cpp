// 변수 swqp하기

#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int x = 10;
    int y = 20;
    swap(x, y);

    cout << "swqp 후 x 값 = " << x << endl;
    cout << "swap 후 y 값 = " << y << endl;
    return 0;
}