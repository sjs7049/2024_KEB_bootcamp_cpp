// Matrix 클래스 만들기
/*                                              
행렬의 크기와 힙에 생성할 행렬을 가리킬 포인터만 private 멤버로 선언, 이외의 모든 멤버 함수는 public 멤버로 선언                                     
생성자는 힙에 배열을 생성하고, 소멸자는 힙에서 배열을 제거                     
setup 멤버 함수는 행렬을 랜덤한 값으로 초기화                                  
이외에도 addition, subtraction, multiplication, print 멤버 함수를 선언
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Matrix  
{  
public:                                                                                                                                         
    Matrix(int rowsize, int colsize)
    : rowSize(rowsize), colSize(colsize){
        ptr = new int* [rowSize];
        for(int i = 0; i < rowSize; i++){
            ptr[i] = new int[i];
        }
    }              
    ~Matrix(){
        for(int i = 0; i < rowSize; i++){
            delete ptr[i];
        }
        delete[] ptr;
    }
    void setup(){
        // 1~5 사이의 수 랜덤으로

        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                ptr[i][j] = rand() % 5 + 1; 
            }
        }
    }
    void add(const Matrix& second, Matrix& result) const{
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < second.colSize; j++){
                result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
            }
        }
    }
    void subtract(const Matrix& second, Matrix& result) const{
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < second.colSize; j++){
                result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
            }
        }
    }
    void multiply(const Matrix& second, Matrix& result) const{
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < second.colSize; j++){
                result.ptr[i][j] = 0;
                for(int k = 0; k < colSize; k++){
                    result.ptr[i][j] += ptr[i][k] * second.ptr[k][j];
                }
            }
        }
    }
    void print() const{
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j <colSize; j++){
                cout << setw(5) << ptr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
private:  
    int rowSize;                    
    int colSize;  
    int** ptr;
};  

int main()
{
    cout << "matrix1" << endl;
    Matrix matrix1(3,4);
    matrix1.setup();
    matrix1.print();

    cout << "matrix2" << endl;
    Matrix matrix2(3,4);
    matrix2.setup();
    matrix2.print();

    cout << "matrix3" << endl;
    Matrix matrix3(4,2);
    matrix3.setup();
    matrix3.print();


    cout << "matrix1 + matrix2의 결과" << endl;
    Matrix addMatrix(3,4);
    matrix1.add(matrix2, addMatrix);
    addMatrix.print();

    cout << "matrix1 - matrix2의 결과" << endl;
    Matrix subMatrix(3,4);
    matrix1.subtract(matrix2, subMatrix);
    subMatrix.print();

    cout << "matrix1 * matrix3의 결과" << endl;
    Matrix mulMatrix(3,2);
    matrix1.multiply(matrix3, mulMatrix);
    mulMatrix.print();
    
    return 0;
}