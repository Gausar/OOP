#include"student.hh"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

Student::Student(int id, const string& firstName, const string& lastName)
    : id(id), firstName(firstName), lastName(lastName) {}

int Student::getId() const {
    return id;
}

const string& Student::getFirstName() const {
    return firstName;
}

const string& Student::getLastName() const {
    return lastName;
}