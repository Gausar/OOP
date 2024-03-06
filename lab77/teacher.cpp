#include"teacher.hh"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
Teacher::Teacher(const string& firstName, const string& lastName, const string& email)
    : firstName(firstName), lastName(lastName), email(email) {}

const string& Teacher::getFirstName() const {
    return firstName;
}

const string& Teacher::getLastName() const {
    return lastName;
}

const string& Teacher::getEmail() const {
    return email;
}
