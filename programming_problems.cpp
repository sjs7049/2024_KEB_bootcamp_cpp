// 3-12. 주어진 화씨 온도를 섭씨 온도로 변환해서 출력하는 프로그램을 만드세요.
// C = (F-32)*(5/9)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double fahrenheit;
    cout << "화씨 온도를 입력하세요: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    cout << fixed << setprecision(2);
    cout << "화씨 온도를 섭씨 온도로 변환한 값은 " << celsius << endl;
    return 0;
}