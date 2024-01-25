// 날짜 번호 구하기
// 몇 월 며칠을 입력 받았을 때 해당 날짜가 올해 몇 번째 날짜인지 구하는 프로그램

#include <iostream>
using namespace std;

int main()
{
    int month, day;
    int totalDays = 0;

    cout << "몇 월인지 입력하세요: ";
    cin >> month;
    cout << "며칠인지 입력하세요: ";
    cin >> day;

    int m01 = 31;
    int m02 = 28;
    int m03 = 31;
    int m04 = 30;
    int m05 = 31;
    int m06 = 30;
    int m07 = 31;
    int m08 = 31;
    int m09 = 30;
    int m10 = 31;
    int m11 = 30;

    switch (month)
    {
    case 12: totalDays += m11;
    case 11: totalDays += m10;
    case 10: totalDays += m09;
    case 9: totalDays += m08;
    case 8: totalDays += m07;
    case 7: totalDays += m06;
    case 6: totalDays += m05;
    case 5: totalDays += m04;
    case 4: totalDays += m03;
    case 3: totalDays += m02;
    case 2: totalDays += m01;
    case 1: totalDays += 0;
    }

    totalDays += day;

    cout << "올해의 " << totalDays << "번째 날입니다." << endl;
    return 0;
}