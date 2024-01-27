// 5-3 1000보다 작은 숫자들을 키보드로 읽어 들인 후 그 합과 평균을 구하는 프로그램을 만드세요.
// 입력은 1000이라는 센티넬을 만날 때 정지합니다.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    int cnt = 0;
    int totalNumber = 0;
    double average;

    while(num != 1000){
        do
        {
            cout << "Input the number less than 1000: ";
            cin >> num;
        } while (num > 1000);
        
        if(num > 1000){
            continue;
        }
        else{
            cnt++;
            totalNumber += num;
        }
    }
    totalNumber -= 1000;
    average = static_cast<double> (totalNumber) / (cnt - 1);

    cout << fixed << setprecision(2);
    cout << "The sum of numbers is " << totalNumber << endl;
    cout << "The average of numbers is " << average << endl;

    return 0;
}