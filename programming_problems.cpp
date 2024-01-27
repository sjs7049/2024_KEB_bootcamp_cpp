// 4-9. [프로그램 4-17]에 윤년의 개념을 추가해서 프로그램 수정하세요.
// 프로그램은 사용자로부터 추가 연도를 입력받으세요.

#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    int day;
    int totalDays = 0;

    cout << "몇 년인지 입력하세요: ";
    cin >> year;
    cout << "몇 월인지 입력하세요: ";
    cin >> month;
    cout << "며칠인지 입력하세요: "; 
    cin >> day;

    bool leapYear;
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        leapYear = true;
    }
    else{
        leapYear = false;
    }

    int m01 = 31;
    int m02;
    if(leapYear){
        m02 = 29;
    }
    else{
        m02 = 28;
    }
    int m03 = 31;
    int m04 = 30;
    int m05 = 31;
    int m06 = 30;
    int m07 = 31;
    int m08 = 31;
    int m09 = 30;
    int m10 = 31;
    int m11 = 30;

    switch(month)
    {
    case 12 : totalDays += m11;
    case 11 : totalDays += m10;
    case 10 : totalDays += m09;
    case 9  : totalDays += m08;
    case 8  : totalDays += m07;
    case 7  : totalDays += m06;
    case 6  : totalDays += m05;
    case 5  : totalDays += m04;
    case 4  : totalDays += m03;
    case 3  : totalDays += m02;
    case 2  : totalDays += m01;
    case 1  : totalDays += 0;
    }

    totalDays +=  day;
    cout << leapYear << endl;
    cout << "올해의 " << totalDays << "번째 날입니다.";
    return 0;      
}