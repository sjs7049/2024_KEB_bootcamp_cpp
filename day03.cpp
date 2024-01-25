#include <iostream>
using namespace std;

int num = 5;

int main()
{
    int num = 25;
    cout << "전역 변수 num의 값 = " << ::num << endl;
    cout << "지역 변수 num의 값 = " << num << endl;
    return 0;
}