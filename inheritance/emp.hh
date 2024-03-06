#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Employee{
    public:
        Employee(const char* name, double salary);
        const char* name() const;
        double salary() const;
    private:
        string _name;
        double _salary;
};

class Manager : public Employee{
    public:
        Manager(const char* name, double salary, list<Employee*> subordinates);
        list<Employee*> subs() const;
    private:
        list<Employee*> _subs;
};