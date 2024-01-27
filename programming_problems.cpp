// 6-11. 도씨 온도를 매개변수로 받아서, 화씨 온도를 리턴하는 함수를 작성하세요.
// 0, 37, 40, 100도씨가 몇 화씨에 해당하는지 구해서 출력하세요.
// 화씨 = 도씨 * 180.0 / 100.0 + 32

#include <iostream>
using namespace std;

int returnCelsius(double paraFahrenheit){
    int celsius = (paraFahrenheit - 32) * (100.0 / 180.0);
    return celsius;
}

int main()
{
    cout << returnCelsius(32) << endl;
    cout << returnCelsius(98.6) << endl;
    cout << returnCelsius(104) << endl;
    cout << returnCelsius(212) << endl;
    return 0;
}