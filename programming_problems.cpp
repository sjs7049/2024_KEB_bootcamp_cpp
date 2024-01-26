// 4-6. 대학교에서 학생의 총 수업료를 계산하고 출력하는 프로그램을 만드세요.
// 학생들은 최대 12학점에 대해 학점당 10달러의 수수료를 지불합니다.
// 12학점을 넘는 분량은 수수료가 없습니다. 등록비는 학생당 10달러라 가정

#include <iostream>
using namespace std;

int main()
{
    int grades, tuition;
    int registrationFee = 10;
    int charge = 0;

    cout << "학점을 입력하세요: ";
    cin >> grades;

    for(int i = 0; i < grades; i++){
        if(grades > 12){
            charge = 120;
        }
        else{
            charge += 10;
        }
    }

    tuition = registrationFee + charge;
    cout << "학생의 총 수업료: " << tuition << "달러" << endl;
    return 0;
}