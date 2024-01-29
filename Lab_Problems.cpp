// 배열 선형 변환하기

#include <iostream>
#include <iomanip>
using namespace std;

void print(int array[][2], int row, int col){
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            cout << setw(3) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rowTransform(int array[][2], int row, int col){
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            cout << setw(3) << array[i][j] << " ";
        }
    }
    cout << endl;
}

void colTransform(int array[][2], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << setw(3) << array[i][j] << " ";
        }
    }
    cout << endl;
}

int main()
{
    const int rowSize = 4;
    const int colSize = 2;
    int numbers[rowSize][colSize] = {{0,10}, {1,11}, {2,12}, {3,13}};

    cout << "원본 배열" << endl;
    print(numbers, rowSize, colSize);

    cout << "행 방향으로 선형 변환한 결과:     ";
    rowTransform(numbers, rowSize, colSize);
    cout << "열 방향으로 선형 변환한 결과:     ";
    colTransform(numbers, rowSize, colSize);
    
    return 0;
}