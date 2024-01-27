// 5-16. 0~99의 범위에 있는 모든 정수 도씨 온도(Celsius)를 화씨 온도(Fahrenheit)로 
// 변환해서 표 형태로 출력하는 프로그램을 만드세요.
// 화씨 = 도씨 * 1.8 + 32

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int celsius;

    do
    {
        cout << "Input the Celsius between 0 and 99: ";
        cin >> celsius;
    } while(celsius < 0 || celsius > 99);

    double fahrenheit = celsius * 1.8 + 32.0;
    cout << "The Fahrenheit of " << celsius << "C is " << fahrenheit << "F" << endl;
    return 0;
}