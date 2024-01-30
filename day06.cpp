#include <iostream>
#include <string>
using namespace std;

void reverse(string& strg){
    string tmp(strg);
    int size = strg.size();
    
    for(int i = 0; i < size; i++){
        strg[i] = tmp[size - 1 - i];
    }
}

int main()
{
    string strg;
    cout << "문자열을 입력하세요: ";
    getline(cin, strg);
    cout << "원본 문자열: " << strg << endl;

    reverse(strg);
    cout << "뒤집은 문자열: " << strg << endl;
    return 0;   
}