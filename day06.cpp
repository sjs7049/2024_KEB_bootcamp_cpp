#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[20] = "This is ";
    const char* str2 = "a string.";
    strcat(str1, str2);
    cout << "str1: " << str1 << endl;
    return 0;
}