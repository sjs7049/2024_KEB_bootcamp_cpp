// 4-5. 학생의 점수를 기반으로 학점을 구하는 프로그램을 만드세요.
// 점수는 0~100점 기준으로 3개를 읽어 들이고, 다음 기준에 따라 요금 계산하는 프로그램을 만드세요.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3;
    double totalScore;
    double average;

    cout << "점수 3개를 입력하세요: ";
    cin >> score1 >> score2 >> score3;

    totalScore = score1 + score2 + score3;
    average = static_cast<double> (totalScore) / 3;
    cout << fixed << setprecision(2) << average << endl;

    if(average > 90){
        cout << "A" << endl;
    }
    else if(average >= 80){
        if(score3 > 90){ cout << "A" << endl; }
        else{ cout << "B" << endl; }
    }
    else if(average >= 70){
        if(score3 > 80){ cout << "B" << endl; }
        else{ cout << "C" << endl; }
    }
    else if(average >= 60){
        if(score3 > 70){ cout << "C" << endl; }
        else{ cout << "D" << endl; }
    }
    else{
        if(score3 > 60){ cout << "D" << endl; }
        else{ cout << "F" << endl; }
    }
    return 0;
}