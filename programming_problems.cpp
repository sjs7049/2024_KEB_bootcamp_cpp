// 7-3. 직교 좌표계 위의 점은 일반적으로 2개의 정수 x, y로 나타냅니다. 
// 이러한 2개의 데이터 멤버를 갖는 Point 클래스를 만드세요. 
// 좌표 출력하는 print 멤버 함수

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(int px, int py)
    : x(px), y(py) {}
    Point()
    : x(0), y(0) {}
    int getX() { return x; }
    int getY() { return y; }
    void print(){
        cout << "(" << x << ", " << y << ")";
    }
    void wherePoint(){
        if(x > 0){
            if(y == 0){ cout << "Right"; }
            else if(y > 0) { cout << "Top Right"; }
            else{ cout << "Bottom Right"; }
        }
        else if(x == 0){
            if(y == 0){ cout << "Overlap"; }
            else if(y > 0) { cout << "Top"; }
            else{ cout << "Bottom"; }
        }
        else{
            if(y == 0){ cout << "Left"; }
            else if(y > 0) { cout << "Top Left"; }
            else{ cout << "Bottom Left"; }
        }
    }
private:
    int x, y;
};

int main()
{
    int x, y;
    cout << "Input the x and y: ";
    cin >> x >> y;

    Point centerPoint;
    Point point(x, y);

    point.print(); 
    cout << " = "; 
    point.wherePoint();
    cout << " of ";
    centerPoint.print();
    cout << endl;

    int dx = pow(point.getX(), 2);
    int dy = pow(point.getY(), 2);
    double distance = sqrt((dx + dy));
    cout << "The distance between two points is " << distance << endl;
    return 0;
}