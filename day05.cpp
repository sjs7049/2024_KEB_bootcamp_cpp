#include <iostream>
using namespace std;

void reverse(int* pArr, int size){
    int i = 0;
    int j = size - 1;

    while(i < size / 2){
        int tmp = *(pArr + i);
        *(pArr + i) = *(pArr + j);
        *(pArr + j) = tmp;
        i++;
        j--;
    }
}

int main()
{
    int arr[5] = {10, 11, 12, 13, 14};
    reverse(arr, 5);

    cout << "배열 거꾸로 출력: ";
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}