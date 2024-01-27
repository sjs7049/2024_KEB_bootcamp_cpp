// 5-10. 다음 알고리즘을 사용해서 두 정수 m과 n의 최대 공약수를 구하는 프로그램을 만드세요.
// m = m-n을 하고, m<n이면 m과 n을 교체
// n이 0이 될 때까지 전 단계를 반복, 최종적으로 최대 공약수는 m
// 9와 12, 7과 11, 12와 140 사용해서 예제 실행해보기

#include <iostream>
using namespace std;

int main()
{   
    int m, n;

    cout << "Input the first number: ";
    cin >> m;
    cout << "Input the second number: ";
    cin >> n;

    while (n != 0) {
        int temp = m;
        m = n;
        n = temp % n;

        if (m < n) {
            // m과 n을 교체
            int temp = m;
            m = n;
            n = temp;
        }
    }

    cout << "두 정수의 최대공약수는 " << m << endl;
    return 0;
}