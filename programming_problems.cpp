// 5-13. 사용자로부터 양의 정수를 입력받고 모든 자릿수의 합을 구하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    int n, tmp;
    int sum = 0;

    do
    {
        cout << "Input the positive integer: ";
        cin >> n;
    } while (n <= 0);

    while (n != 0)
    {
        tmp = n % 10; 
        sum += tmp;
        n /= 10;
    }
    
    cout << "The sum of all digits is " << sum << endl;
    return 0;
}