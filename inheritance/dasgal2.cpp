#include<iostream>
using namespace std;

class Shape{
    protected:
        int x;
        int y;
    public: 
        Shape(int a, int b) : x(a), y(b){}
        virtual int talbai() = 0;
};
class Triangle :: public Shape{
    public:
        Triangle(int a, int b) : Shape(a, b){}
        int talbai() override {
            return (x * y) / 2;
        }
};
class Rectangle::public Shape{
    public:
        Rectangle(int a, int b) : Shape(a, b){}
        int talbai() override {
            return x * y;
        }
};
int main(){
    
    Triangle k1(0, 0);
    Rectangle k2(0, 0);
    int a, b;
    cin >> a >> b;
    k1 = Triangle(a, b);
    int c , d;
    cin >> c >> d;
    k2 = Rectangle(c, d);
    cout << "Gurvaljinii talbai : " << k1.talbai();
    cout << "Dorvoljinii talbai : " << k2.talbai();
    return ;
}