#include <iostream>
#include <iomanip>
using namespace std;

void findStudentAverage(int const array[][3], int rowsize, int colsize, double averArray[]){
    for(int i = 0; i < rowsize; i++){
        int sum = 0;
        for(int j = 0; j < colsize; j++){
            sum += array[i][j];
        }
        double average = static_cast<double> (sum) / colsize;
        averArray[i] = average;
    }
}

void findTestAverage(int const array[][3], int rowsize, int colsize, double averArray[]){
    for(int j = 0; j < colsize; j++){
        int sum = 0;
        for(int i = 0; i < rowsize; i++){
            sum += array[i][j];
        }
        double average = static_cast<double> (sum) / rowsize;
        averArray[j] = average;
    }
}

int main()
{
    const int rowSize = 5;
    const int colSize = 3;

    int scores[rowSize][colSize] = {{82, 65, 72}, {73, 70, 80}, {91, 76, 40}, {72, 72, 68}, {65, 90, 80}};
    double stuAver[rowSize];
    double testAver[colSize];

    findStudentAverage(scores, rowSize, colSize, stuAver);
    findTestAverage(scores, rowSize, colSize, testAver);

    cout << "                  시험 점수        평균" << endl; 
    cout << "           ---------------------- -------" << endl;
    for(int i = 0; i < rowSize; i++){
        cout << "           ";
        for(int j = 0; j < colSize; j++){
            cout << scores[i][j] << " ";
        }
        cout << fixed << setprecision(2) << "               " << stuAver[i] << endl;
    }

    cout << "최종 점수  ";
    for(int j = 0; j < colSize; j++){
        cout << fixed << setprecision(2) << testAver[j] << " ";
    }
    cout << endl;
    return 0;
}