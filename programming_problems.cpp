// 5-15. 사용자로부터 양의 정수를 입력받고 회문 숫자인지 확인하는 프로그램을 만드세요.
// 회문 숫자는 자릿수를 반대로 해도 원래 숫자와 같아지는 숫자를 의미합니다.


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

    int m = n;
    while (m > 0)
    {
        tmp = m % 10;
        res = res*10 + tmp;
        m /= 10;
    }
    
    if(res == n){
        cout << n << " is a palindrome." << endl;
    }
    else{
        cout << n << " is NOT a palindrome." << endl;
    }
    return 0;
}