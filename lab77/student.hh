#ifndef STUDENT_HH
#define STUDENT_HH
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Student {
private:
    int id;
    string firstName;
    string lastName;

public:
    Student(int id, const string& firstName, const string& lastName);
    int getId() const;
    const string& getFirstName() const;
    const string& getLastName() const;
};
#endif