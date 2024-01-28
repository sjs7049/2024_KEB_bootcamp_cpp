// 7-5. 데이터 멤버로 houseNo, streetName, cityName, stateName, zipcode를 갖습니다.
// 매개변수가 있는 생성자와 소멸자 정의하세요, 주소를 출력하는 접근자 함수 만드세요.
// 예시 3708 S Las Vegas Blvd, Las Vegas, NV 89109

#include <iostream>
using namespace std;

class Address
{
public:
    Address(int hn, string srn, string cn, string stn, int zc)
    : houseNo(hn), streetName(srn), cityName(cn), stateName(stn), zipcode(zc) {}
    ~Address() {}
    int getHouseNo() { return houseNo; }
    string getStreetName() { return streetName; }
    string getCityName() { return cityName; }
    string getStateName() { return stateName; }
    int getZipCode() { return zipcode; }
private:
    int houseNo{0}, zipcode{0};
    string streetName, cityName, stateName;
};

int main()
{   
    int houseNo, zipcode;
    string streetName, cityName, stateName;
    
    cout << "Input the Number: ";
    cin >> houseNo;
    cout << "Input the Name of Street: ";
    cin >> streetName;
    cout << "Input the City: ";
    cin >> cityName;
    cout << "Input the State: ";
    cin >> stateName;
    cout << "Input the Zipcode: ";
    cin >> zipcode;

    Address address(houseNo, streetName, cityName, stateName, zipcode);
    cout << "Address : " << address.getHouseNo() << " " << address.getStreetName() << ", "
        << address.getCityName() << ", " << address.getStateName() << " " << address.getZipCode() << endl;
    return 0;
}