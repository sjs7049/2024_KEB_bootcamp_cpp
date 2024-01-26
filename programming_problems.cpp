// 3-13. 아르바이트로 일주일에 기본 40시간을 일한다고 가정
// 40시간 넘게 일을 하는 경우, 넘는 시급은 60%가 추가로 지급됨
// 일주일의 기본 급여와 추가로 일한 시간을 입력했을 때, 전체 급여를 구하는 프로그램 작성

#include <iostream>
using namespace std;

int main()
{
    long baseSalary, totalSalary;
    long addSalary = 0.0;
    int hoursWorked = 40;
    int overHours;

    cout << "기본 급여 입력: ";
    cin >> baseSalary;
    cout << "추가로 일한 시간 입력: ";
    cin >> overHours;

    if(hoursWorked + overHours > 40){
        addSalary = (baseSalary * overHours * 0.6);
    }
    totalSalary = (hoursWorked + overHours) * baseSalary + addSalary;
    cout << "전체 급여 : " << totalSalary << endl;
    return 0;
} 