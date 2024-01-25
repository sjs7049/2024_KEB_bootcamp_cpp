// 정기 적금의 미래 가치 찾기

// 승수 = (1 + 인수)^n + (1 + 인수)^(n-1) + ... + (1 + 인수)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getInput(string message){
    double input;

    do
    {
        cout << message;
        cin >> input;
    } while (input < 0.0);
    
    return input;
}

void input(double& invest, double& rate, double& term){
    // 참조로 전달을 사용해서 변수 3개(투자한 가치, 이율, 기간)에 값을 할당해서 main 함수에 전달
    // 입력을 받기 위해서 별도의 함수 getInput 함수 만들고 활용

    invest = getInput("정기 적금에 투자할 금액을 입력하세요: ");
    rate = getInput("1년 마다의 이율을 입력하세요: ");
    term = getInput("몇 년마다 넣을지 입력하세요: ");
}

double findMultiplier(double rate, double term){
    // 승수 = (1 + 인수)^n + (1 + 인수)^(n-1) + ... + (1 + 인수)
    double multiplier = 0.00;
    for(int i = term; i > 0; i--){
        multiplier += pow((1 + rate / 100), i);
    }

    return multiplier;
}

void process(double invest, double rate, double term, double& multiplier, double& futurevalue){
    // 미래 가치 계산, 5개의 변수(3개는 input함수에서 입력 받은 거, 2개는 승수와 미래 가치를 참조로)
    // 내부적으로 findMultiplier 함수 호출해서 승수 계산, 모든 변수 활용해서 미래 가치 계산
    // 미래 가치 = 투자한 가치 * 승수
    multiplier = findMultiplier(rate, term);
    futurevalue = invest * multiplier;
}

void printData(double invest, double rate, double term){
    cout << fixed << setprecision(2);
    cout << "\n정기 적금 정보" << endl;
    cout << "정기 적금 투자 금액: " << invest << endl;
    cout << "이율: " << rate << "% 연 마다" << endl;
    cout << "기간: " << term << "년" << endl;
}

void printResult(double multiplier, double futurevalue){
    cout << "투자의 승수 = " << setprecision(8) << multiplier << endl;
    cout << "미래 가치 = " << setprecision(2) << futurevalue << endl;
}


void output(double invest, double rate, double term, double multiplier, double futurevalue){
    printData(invest, rate, term);
    cout << endl;
    printResult(multiplier, futurevalue);
}

int main()
{
    double invest, rate, term;
    double multiplier, futurevalue;

    input(invest, rate, term);
    process(invest, rate, term, multiplier, futurevalue);
    output(invest, rate, term, multiplier, futurevalue);
    return 0;
}