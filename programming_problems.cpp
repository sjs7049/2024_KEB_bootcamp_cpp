// 4-11. 사용자로부터 달러 값을 입력받고, 달러 지폐로 이를 지불할 때 지폐의 개수가 
// 최소가 되는 경우를 출력하는 프로그램을 만드세요. 0이 아닌 수의 지폐 수만 출력하면 됩니다.
// 달러는 100달러, 50달러, 20달러, 10달러, 5달러, 1달러 지폐가 있습니다.

// 425달러: 100달러 4개, 20달러 1개, 5달러 1개
#include <iostream>
using namespace std;

int main()
{
    int dollars;

    cout << "Input the dollars: ";
    cin >> dollars;

    int cnt100 = dollars / 100;
    dollars %= 100;
    int cnt50 = dollars / 50;
    dollars %= 50;
    int cnt20 = dollars / 20;
    dollars %= 20;
    int cnt10 = dollars / 10;
    dollars %= 10;
    int cnt5 = dollars / 5;
    dollars %= 5;
    int cnt1 = dollars;

    if(cnt100 > 0){
        cout << "The number of 100 dollars is " << cnt100 << endl;
    }
    if(cnt50 > 0){
        cout << "The number of 50 dollars is " << cnt50 << endl;
    }
    if(cnt20 > 0){
        cout << "The number of 20 dollars is " << cnt20 << endl;
    }
    if(cnt10 > 0){
        cout << "The number of 10 dollars is " << cnt10 << endl;
    }
    if(cnt5 > 0){
        cout << "The number of 5 dollars is " << cnt5 << endl;
    }
    if(cnt1 > 0){
        cout << "The number of 1 dollars is " << cnt1 << endl;
    }
    
    return 0;
}