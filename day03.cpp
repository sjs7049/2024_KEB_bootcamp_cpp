// 윤년인지 확인하기

#include <iostream>
using namespace std;

int input()
{
    int y;
    do
    {
        cout << "Enter a year after 1582: ";
        cin >> y;
    } while (y < 1582);
    
    return y;
}

bool process(int y){
    bool cretical1 = (y % 4 == 0);
    bool cretical2 = (y % 100 != 0)||(y % 400 == 0);

    return (cretical1) && (cretical2);
}

void output(int y, bool result){
    if(result){
        cout << "Year " << y << " is a leap year." << endl;
    }
    else{
        cout << "Year " << y << " is not a leap year." << endl;
    }
}

int main()
{
    int year = input();
    bool result = process(year);
    output(year, result);
    return 0;
}