#include <iostream>
using namespace std;

void mulByTwo(int array[], int size){
    for(int i = 0; i < size; i++){
        array[i] *= 2;
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
    print(numbers, 5);

    mulByTwo(numbers, 5);
    print(numbers, 5);
    return 0;
}