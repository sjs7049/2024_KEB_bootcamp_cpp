// 6-11. 도씨 온도를 매개변수로 받아서, 화씨 온도를 리턴하는 함수를 작성하세요.
// 0, 37, 40, 100도씨가 몇 화씨에 해당하는지 구해서 출력하세요.
// 화씨 = 도씨 * 180.0 / 100.0 + 32

#include <iostream>
using namespace std;

double returnFahrenheit(int paraCelsius){
    double fahrenheit = paraCelsius * 180.0 / 100.0 + 32.0;

    return fahrenheit;
}

int main()
{
    cout << returnFahrenheit(0) << endl;
    cout << returnFahrenheit(37) << endl;
    cout << returnFahrenheit(40) << endl;
    cout << returnFahrenheit(100) << endl;
    return 0;
}