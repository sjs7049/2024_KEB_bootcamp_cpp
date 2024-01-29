
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifo("numbersArray.txt");
    if(!ifo){
        cout << "The file could not be opened!" << endl;
        exit(1);
    }

    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;

    while(ifo >> numbers[size]){
        size++;
    }

    ifo.close();

    int sum = 0;
    int max{0}, min{101};
    double average;
    for(int i = 0; i < size; i++){
        sum += numbers[i];
        if(numbers[i] > max){
            max = numbers[i];
        }
        if(numbers[i] < min){
            min = numbers[i];
        }
    }

    average = static_cast<double> (sum) / size;
    cout << "목록에 숫자가 10개 있습니다." << endl;
    cout << "합계: " << sum << endl;
    cout << "평균: " << average << endl;
    cout << "최솟값: " << min << endl;
    cout << "최댓값: " << max << endl;
    return 0;
}