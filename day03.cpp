// pass-by-value

#include <iostream>
using namespace std;

void fun(int y){
    y++;
    cout << "fun 함수 내부의 y = " << y << endl;
}

int main()
{
    int x = 10;
    fun(x);

    cout << "main 함수 내부의 x = " << x << endl;
    return 0;
}