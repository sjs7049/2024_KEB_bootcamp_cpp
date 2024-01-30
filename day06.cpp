#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strg("The C++ language is fun to work with.");
    cout << strg.substr(8) << endl;
    cout << strg.substr(4,12) << endl;
    return 0;
}