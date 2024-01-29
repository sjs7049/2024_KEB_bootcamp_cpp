// Course 클래스 만들기

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

class Course
{
public:
    Course(int nos, const char* ifoName)
    : numOfStds(nos), inputFileName(ifoName) {
        if(!inputFile){
            cout << "The file could NOT be opened!" << endl;
            exit(1);
        }
        inputFile.open(inputFileName);
        students = new Student[numOfStds];
        getInput();
        setGrades();
        setAverage();
        setDeviations();
        printResult();
    }
    ~Course() {
        delete[] students;
        inputFile.close();
    }
private:
    int numOfStds;
    const char* inputFileName;
    ifstream inputFile;
    struct Student {int id; int score; char grade; double deviation;};
    Student* students;
    double averageScore;
    double standardDeviation;
    void getInput(){
        for(int i = 0; i < numOfStds; i++){
            inputFile >> students[i].id;
            inputFile >> students[i].score;
        }
    }
    void setGrades(){
        char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
        for(int i = 0; i < numOfStds; i++){
            int value = students[i].score / 10;
            students[i].grade = grades[value]; 
        }
    }
    void setAverage(){
        int sum = 0;
        for(int i = 0; i < numOfStds; i++){
            sum += students[i].score;
        }
        averageScore = static_cast<double> (sum) / numOfStds;
    }
    void setDeviations(){
        double sumDv = 0.0;
        for(int i = 0; i < numOfStds; i++){
            double value = students[i].score - averageScore;
            sumDv += pow(value, 2);
            students[i].deviation = value;
        }
        standardDeviation = sqrt(sumDv) / numOfStds;
    }
    void printResult() const{
        cout << "ID   점수  등급    편차" << endl;
        cout << "---- ----- ----- -------" << endl;

        for(int i = 0; i < numOfStds; i++){
            cout << setw(4) << noshowpoint << noshowpos;
            cout << students[i].id;
            cout << setw(6) << noshowpoint << noshowpos;
            cout << students[i].score;
            cout << setw(6) << students[i].grade;
            cout << fixed << setw(8) << setprecision(2);
            cout << showpoint << showpos;
            cout << students[i].deviation << endl; 
        }

        cout << "평균 점수: " << showpos << fixed << setprecision(2) << averageScore << endl;
        cout << "표준 편차: " << showpos << fixed << setprecision(2) << standardDeviation << endl;
    }
};

int main()
{
    Course course(10, "scores.txt");
    return 0;
}