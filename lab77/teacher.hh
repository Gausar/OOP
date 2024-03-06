#ifndef TEACHER_HH
#define TEACHER_HH
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Teacher {
private:
    string firstName;
    string lastName;
    string email;

public:
    Teacher(const string& firstName, const string& lastName, const string& email);
    const string& getFirstName() const;
    const string& getLastName() const;
    const string& getEmail() const;
};
#endif