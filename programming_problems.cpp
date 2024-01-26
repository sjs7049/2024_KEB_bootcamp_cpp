// 3-11. 주어진 섭씨 온도를 화씨 온도로 변환해서 출력하는 프로그램을 만드세요.
// F = (9/5)*C + 32

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double celsius;
    cout << "섭씨 온도를 입력하세요: ";
    cin >> celsius;

    double fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    cout << fixed << setprecision(2);
    cout << "섭씨 온도를 화씨 온도로 변환한 값은 " << fahrenheit << endl;
    return 0;
}