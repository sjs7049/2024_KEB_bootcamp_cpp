#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Hello friends.";

    char* cptr = strchr(str, 'e');
    *cptr = 'E';
    cout << "첫 번째 변경 후의 str: " << str << endl;

    cptr = strrchr(str, 'e');
    *cptr = 'E';
    cout << "두 번째 변경 후의 str: " << str << endl;
    return 0;
}