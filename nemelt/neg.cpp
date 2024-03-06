#include<iostream>
#include<math.h>
#include<vector>

using namespace std;
#define pi 3.14
class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};
class D2Shape: public Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;

};
class Circle : public D2Shape{
    private:
        double radius;
        int x;
        int y;
    public:
        Circle(double r, int x, int y){
            radius = r;
            this->x = x;
            this->y = y;
        }
        double area(){
            return pi*radius*radius;
        }
        double perimeter(){
            return 2*pi*radius;
        }
};
class Square : public D2Shape{
    private:
        double urt;
        int x1, y1, x2, y2, x3, y3, x4, y4;
    public:
        Square(double l, int a, int b){
            urt = l;
            x1 = a;
            y1 = b;
            x2 = a + l;
            y2 = b;
            x3 = a;
            y3 = b + l;
            x4 = a + l;
            y4 = b + l;
        }
        double area(){
            return urt * urt;
        }
        double perimeter(){
            return 4*urt;
        }
};
class Triangle : public D2Shape{
    private:
        double a;
        int x1, y1;
        int x2, y2;
        int x3, y3;
    public:
        Triangle(double a, int a1, int a2){
            this->a = a;
            x1 = a1;
            y1 = a2;
            x2 = a1*cos(pi*60/180) + a;
            y2 = a2*cos(pi*60/180) + a;
            x3 = a1*cos(pi*120/180) + a;
            y3 = a2*cos(pi*120/180) + a;
        }
        double area(){
            double s = (a+a+a)/2;
            return sqrt(s*(s-a)*(s-a)*(s-a));
        }
        double perimeter(){
            return 3*a;
        }
};
int main(){
    Shape *c1 = new Circle(3, 0, 0);
    Shape *t1 = new Triangle(5, 0, 0);
    Shape *s1 = new Square(4, 0, 0);

    vector<Shape*> list_of_shapes;

    list_of_shapes.push_back(c1);

    list_of_shapes.push_back(t1);

    list_of_shapes.push_back(s1);
    vector<Shape*>::iterator it;
    for(it = list_of_shapes.begin(); it != list_of_shapes.end(); it++){
            cout<< (*it)->area() << " "<< (*it)->perimeter() << endl;
    }

}