#include <iostream>
using namespace std;

void pattern(int patternsize){
    for(int i = 1; i <= patternsize; i++){
        for(int j = 1; j <= patternsize; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int patternSize;
    
    cout << "패턴의 크기를 입력하세요: ";
    cin >> patternSize;

    pattern(patternSize);
    return 0;
}