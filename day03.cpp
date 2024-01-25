// 정적 지역 변수

#include <iostream>
using namespace std;

void fun(){
    static int cnt = 0;
    cnt++;
    cout << "count = " << cnt << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}