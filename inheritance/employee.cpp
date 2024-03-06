#include <bits/stdc++.h>
#include"emp.hh"

using namespace std;


Employee::Employee(const char* name, double salary) : _name(name), _salary(salary){};
const char* Employee::name() const {return _name.c_str();}
double Employee::salary() const{return _salary;}
   
Manager::Manager(const char* name, double salary, list<Employee*> subordinates) :
Employee(name, salary), _subs(subordinates){}

list<Employee*> Manager::subs() const{return _subs;}
