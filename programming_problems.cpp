// 4-3. 사용자로부터 1~12 사이의 숫자를 입력받고 해당 월을 January, ... December와 
// 같은 형태의 영어로 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    int monthNumber;

    do
    {
        cout << "Input the number between 1 and 12: ";
        cin >> monthNumber;
    } while (monthNumber < 1 && monthNumber > 12);
    
    switch (monthNumber)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    }
    return 0;
}