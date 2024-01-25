// 입력받은 숫자의 합과 곱 구하기

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int size;
    double num;
    double sum{0}, mul{1};

    do
    {
        cout << "입력할 숫자의 수를 음수가 아닌 정수로 입력하세요: ";
        cin >> size;
    } while (size < 0);
    
    for(int i = 0; i < size; i++){
        cout << "다음 숫자를 입력하세요: ";
        cin >> num;

        sum += num;
        mul *= num;
    }
    
    cout << fixed << setprecision(2);
    cout << "합 = " << sum << endl;
    cout << "곱 = " << mul << endl;
    return 0;
}