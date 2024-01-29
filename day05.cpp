#include <iostream>
using namespace std;

void reverseArray(int array1[], int array2[], int size){
    for(int i = 0; i < size; i++){
        array2[i] = array1[(size - 1) - i];
    }
}

void print(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[5] = {150, 170, 190, 110, 130};
    int reverseNumbers[5];
    print(numbers, 5);

    reverseArray(numbers, reverseNumbers, 5);
    print(reverseNumbers, 5);
    return 0;
}