// 6-9. 1~10 범위 정수의 제곱근을 출력하는 프로그램을 작성하세요.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++){
        cout << sqrt(i) << " ";
    }
    cout << endl;
    return 0;
}