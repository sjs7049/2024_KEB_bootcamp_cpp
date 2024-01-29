
#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    Student() {}
    Student(string nameValue, int scoreValue)
    : name(nameValue), score(scoreValue) {
        if(scoreValue > 90) { grade = 'A'; }
        else if(scoreValue > 80) { grade = 'B'; }
        else if(scoreValue > 70) { grade = 'C'; }
        else if(scoreValue > 60) { grade = 'D'; }
        else { grade = 'F'; }
    }
    ~Student() {}
    void print(){
        cout << setw(12) << left << name;
        cout << setw(8) << score;
        cout << setw(8) << grade << endl;
    }
private:
    string name;
    int score;
    char grade;
};

int main()
{
    Student student[5];
    student[0] = Student("George", 82);
    student[1] = Student("John", 73);
    student[2] = Student("Luci", 91);
    student[3] = Student("Mary", 72);
    student[4] = Student("Sue", 65);

    for(int i = 0; i < 5; i++){
        student[i].print();
    }
    return 0;
}