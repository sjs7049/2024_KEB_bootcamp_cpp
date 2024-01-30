#include <iostream>
#include <string>
using namespace std;

void reverse(string& strg){
    string temp(strg);
    int size = strg.size();

    for(int i = 0; i < size; i++){
        strg[i] = temp[size - 1 - i];
    }
}

bool isPalindrome(string& strg){
    string temp(strg);
    reverse(temp);
    return(temp == strg);
}

int main()
{
   string strg;
   cout << "문자열을 입력하세요: ";
   getline(cin, strg);

   if(isPalindrome(strg)){
    cout << strg << "은 회문입니다." << endl;
   }
   else{
    cout << strg << "은 회문이 아닙니다." << endl;
   }
   return 0;
}