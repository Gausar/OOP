#include"lab6.hh"

Triangle::Triangle(double a, double b, double c){
    tal1 = a;
    tal2 = b;
    tal3 = c;
}
double Triangle::area(){
    double k;
    k = acos((pow(tal1, 2) + pow(tal2, 2) - pow(tal3, 2)) / (2*tal1*tal2)); 
    double sinK = sqrt(1-pow(cos(k), 2));
    return tal1*tal2*sinK/2;
}
double Triangle::perimeter(){
    return tal1 + tal2 + tal3;
}
Rectangle::Rectangle(double a, double b){
    urt = a; 
    orgon = b;
}
double Rectangle::area(){
    return urt * orgon;
}
double Rectangle::perimeter(){
    return (urt + orgon) * 2;
}
Circle::Circle(double r){
    radius = r;
}
double Circle::area(){
    return radius*radius*pi;
}
double Circle::perimeter(){
    return 2*pi*radius;
}
