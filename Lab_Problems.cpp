// 학생 성적 찾기

#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3;
    int maxScore, minScore, studentGrade;

    cout << "첫 번째 점수 입력: ";
    cin >> score1;
    cout << "두 번째 점수 입력: ";
    cin >> score2;
    cout << "세 번째 점수 입력: ";
    cin >> score3;

    cout << "입력한 점수 = " << score1 << " " << score2 << " " << score3 << endl;

    if(score1 > score2 && score1 > score3){
        maxScore = score1;
    }
    else if(score2 > score1 && score2 > score3){
        maxScore = score2;
    }
    else if(score3 > score1 && score3 > score2){
        maxScore = score3;
    }

    if(score1 < score2 && score1 < score3){
        minScore = score1;
    }
    else if(score2 < score1 && score2 < score3){
        minScore = score2;
    }
    else if(score3 < score1 && score3 < score2){
        minScore = score3;
    }

    cout << "최소 점수와 최대 점수 = " << minScore << " " << maxScore << endl;

    studentGrade = (minScore + maxScore) / 2;
    if((minScore + maxScore) % 2 != 0){
        studentGrade++;
    }
    cout << "학생 성적 = " << studentGrade << endl;
    return 0;
}