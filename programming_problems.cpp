// 3-10. 4개의 점수(int)를 입력 받고, 이를 기반으로 평균 점수(double)를 찾아 출력하는 프로그램을 만드세요.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score;
    int totalScore = 0;
    double average;

    cout << "4개의 점수를 입력하세요: " << endl;
    for(int i = 0; i < 4; i++){
        cin >> score;
        totalScore += score;
    }

    average = static_cast<double> (totalScore) / 4;
    cout << "평균 점수는 " << fixed << setprecision(2) << average << endl;

    return 0;
}