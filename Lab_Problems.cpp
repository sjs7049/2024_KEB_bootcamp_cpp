// 문자열과 관련된 사용자 정의 함수 만들기  

#include <iostream>
#include <string>
using namespace std;

void pushFront(string& strg, char c){
    string temp(1, c);
    strg.insert(0, temp);
}

void pushBack(string& strg, char c){
    string temp(1, c);
    strg.append(temp);
}

char popFront(string& strg){
    int idx = 0;
    char temp = strg[idx];
    strg.erase(idx, 1);
    return temp;
}

char popBack(string& strg){
    int idx = strg.size() - 1;
    char temp = strg[idx];
    strg.erase(idx, 1);
    return temp;
}

int main()
{
    string strg("abcdefgh");
    
    cout << "pushFront 전의 문자열: " << strg << endl;
    pushFront(strg, 'A');
    cout << "pushFront 후의 문자열: " << strg << endl;

    cout << "pushBack 전의 문자열: " << strg << endl;
    pushBack(strg, 'Z');
    cout << "pushBack 후의 문자열: " << strg << endl;

    cout << "popFront 전의 문자열: " << strg << endl;
    char c1 = popFront(strg);
    cout << "popFront 후의 문자열: " << strg << endl;
    cout << "추출한 문자: " << c1 << endl;

    cout << "popBack 전의 문자열: " << strg << endl;
    char c2 = popBack(strg);
    cout << "popBack 후의 문자열: " << strg << endl;
    cout << "추출한 문자: " << c2 << endl;

    return 0;
}