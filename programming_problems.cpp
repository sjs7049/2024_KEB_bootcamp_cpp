// 7-7. 다음과 같은 Employee 클래스를 정의하세요.
// 데이터 멤버로 name, age, serviceYear, salary 가짐
// 매개변수가 있는 생성자와 소멸자 정의
// 접근자 함수 getName, getAge, getServiceYear, getSalary 가짐

#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
public:
    Employee(string nameValue, int ageValue, int serviceYearValue)
    : name(nameValue), age(ageValue), serviceYear(serviceYearValue) {
        salary = serviceYear * 100;
    }
    ~Employee() {}
    string getName() const { return name; }
    int getAge() const { return age; }
    int getServiceYear() const { return serviceYear; }
    int getSalary() const {
        return salary;
    }
private:
    string name;
    int age, serviceYear;
    int salary;
};

int main()
{   
    string name;
    int age, serviceYear;
    int salary;

    cout << "Input the name: ";
    cin >> name;
    cout << "Input the age: ";
    cin >> age;
    cout << "Input the service year: ";
    cin >> serviceYear;

    Employee employee(name, age, serviceYear);
    cout << "\n----Employee information----" << endl;
    cout << setw(15) << "Name: " << employee.getName() << endl;
    cout << setw(15) << "Age: " << employee.getAge() << endl;
    cout << setw(15) << "Service Year: " << employee.getServiceYear() << endl;
    cout << setw(15) << "Salary: " << employee.getSalary() << endl;
    return 0;
}