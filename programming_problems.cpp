// 7-4. 다음과 같은 멤버를 갖는 Person 클래스를 만드세요.
// 데이터 멤버: name, age / 접근자 멤버 함수: getName, getAge
// 설정자 멤버 함수: setName, setAge / 매개변수가 있는 생성자와 소멸자 포함

#include <iostream>
using namespace std;

class Person
{
public:
    Person(string nameValue, int ageValue)
    : name(nameValue), age(ageValue) {
        cout << "이름과 나이가 생성되었습니다." << endl;
    }
    ~Person() {
        cout << "이름과 나이가 소멸되었습니다." << endl;
    }
    void setName(string nameValue){ name = nameValue; }
    void setAge(int ageValue){ age = ageValue; }
    string getName(){ return name; }
    int getAge(){ return age; }
private:
    string name;
    int age;
};

int main()
{
    string name;
    int age;

    cout << "Input the name: ";
    cin >> name;
    cout << "Input the age: ";
    cin >> age;

    Person person1(name, age);
    cout << "Name is " << person1.getName() << ", Age is " << person1.getAge() << endl;
    return 0;
}