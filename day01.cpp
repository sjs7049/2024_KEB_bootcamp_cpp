# include <iostream>
using namespace std;

// 2-1. 다음과 같은 삼각형을 * 기호로 출력하는 프로그램을 만드세요.
/*
int main()
{
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/

// 2-2. 다음과 같은 그림을 * 기호로 출력하는 프로그램을 만드세요.
/*
int main()
{
    for(int i = 1; i < 3; i++){
        for(int j = 1; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/

// 2-3. 다음과 같이 알파벳 H로, 큰 알파벳 H를 출력하는 프로그램을 만드세요.
/*
int main()
{
    for(int i = 1; i <= 5; i++){
        if(i == 3){
            for(int i = 1; i <= 7; i++){
                cout << "H";
            }
        }
        else{
            cout << "H" << "     " << "H";
        }
        cout << endl;
    }
    return 0;
}
*/

// 2-4. 시간, 분, 초 단위로 시간을 입력받아서 초 단위로 환산해 출력하는 프로그램을 만드세요.
/*
int main()
{
    int hour, minute, second;
    cout << "Input the hour, minute, second : ";
    cin >> hour >> minute >> second;

    int h = hour * 60 * 60;
    int m = minute * 60;
    int s = second;

    int second_sum = h + m + s;
    cout << "The total is " << second_sum << endl;
    return 0;
}
*/

// 2-5. 4개의 숫자를 입력받고, 그 합을 출력하는 프로그램을 만드세요.
/*
int main()
{
    int n1, n2, n3, n4, sum;
    cout << "Input 4 numbers : ";
    cin >> n1 >> n2 >> n3 >> n4;

    sum = n1 + n2 + n3 + n4;
    cout << "The sum of 4 numbers is " << sum << endl;
    return 0;
}
*/

// 2-6. 정사각형의 변 하나가 주어졌을 때, 그 면적과 둘레를 구하는 프로그램을 만드세요.
/*
int main()
{
    int n;
    int perimeter, area;
    cout << "정사각형 한 변의 길이를 입력하세요 : ";
    cin >> n;

    perimeter = 4 * n;
    area = n * n;

    cout << "정사각형 둘레은 " << perimeter << "입니다." << endl;
    cout << "정사각형 면적은 " << area << "입니다." << endl;
    return 0;
}
*/

// 2-7. 성과 이름을 입력받은 뒤, 다음과 같이 서양식 이름 표현으로 성과 이름을 출력하는 프로그램을 만드시오.
/*
# include <string>
int main()
{
    string firstName, lastName;
    cout << "Input the first name : ";
    cin >> firstName;

    cout << "Input the last name : ";
    cin >> lastName;

    cout << "The full name : " << firstName << " " << lastName << endl;
    return 0;
}
*/

// 2-8. 사용자로부터 2개의 정수를 입력받은 뒤, 그 합을 출력하는 프로그램을 만드세요.
/*
int main()
{
    int n1, n2;
    cout << "Input 2 numbers : ";
    cin >> n1 >> n2;

    int sum = n1 + n2;
    cout << "The sum of 2 numbers : " << sum << endl;
    return 0;
}
*/

// 2-9. 소비세 9%라 가정하고, 판매 금액이 주어졌을 때, 다음과 같이 출력하는 프로그램을 만드세요.
// 소비세는 상수로 정의하여 프로그램을 여러 번 실행해야 함
/*
int main()
{
    const double consumption_tax = 0.09;
    double sale_price, total_price;

    cout << "판매 금액을 입력하세요 : ";
    cin >> sale_price;

    cout << "전체 금액은 : " << consumption_tax * sale_price + sale_price << "입니다." << endl;
    return 0;

}
*/

// 2-10. 주어진 시/도 이름, 구 이름, 도로 이름, 도로 번호, 
// 우편 번호를 다음과 같은 형식으로 출력하는 프로그램을 만드세요.
/*
# include <string>

int main()
{
    string si = "서울시"; 
    string gu = "강서구";
    string roadName = "마곡서로";
    string roadNumber = "133";
    string zipCode = "07798";

    cout << si << ", " << gu << ", " << roadName << ", " << roadNumber << ", " << zipCode << endl;
    return 0;
}
*/
