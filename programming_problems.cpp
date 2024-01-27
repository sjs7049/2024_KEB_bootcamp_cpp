// 5-14. 사용자로부터 양의 정수를 입력받고 자릿수를 반대로 해서 출력하는 프로그램을 만드세요.
// 예를 들어 359를 입력했다면 953 출력

#include <iostream>
using namespace std;

int main()
{
    int n, tmp;
    int res = 0;

    do
    {
        cout << "Input the positive integer: ";
        cin >> n;
    } while (n <= 0);

    while (n > 0)
    {
        tmp = n % 10;
        res = res*10 + tmp;
        n /= 10;
    }
    
    cout << "The integer with a digit reversed is " << res << endl;
    return 0;
}