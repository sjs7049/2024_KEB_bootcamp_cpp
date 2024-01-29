// 빈도 배열과 히스토그램 만들기

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifo("intHistogram.txt");
    if(!ifo){
        cout << "The file could NOT be opened!" << endl;
        exit(1);
    }
    
    const int CAPACITY = 10;
    int frequency[CAPACITY] = {0};

    int num;
    int size = 0;
    while(ifo >> num){
        if(num >= 0 and num <= 9){
            size++;
            frequency[num]++;
        }
    }

    ifo.close();

    cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다." << endl;
    for(int i = 0; i < CAPACITY; i++){
        cout << i << " ";
        for(int j = 0; j < frequency[i]; j++){
            cout << "*";
        }
        cout << " " << frequency[i] << endl;
    }
    return 0;
}