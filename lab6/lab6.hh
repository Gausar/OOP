#ifndef LAB6_HH
#define LAB6_HH
#include<iostream>
#include<cmath>
#include<vector>

#define pi 3.14

using namespace std;

class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
        //virtual ~Shape(){};
};

class Triangle : public Shape{
    private:
        double tal1, tal2, tal3;
    public:
        Triangle(double a, double b, double c);
        double area();
        double perimeter();
};

class Rectangle : public Shape{
    private:
        double urt, orgon;
    public:
        Rectangle(double a, double b);
        double area();
        double perimeter();
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double r);
        double area();
        double perimeter();
};

#endif