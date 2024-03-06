#include"course.hh"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include"student.hh"
#include"teacher.hh"

Course::Course(const string& name, const Teacher& teacher, int seat)
    : name(name), teacher(teacher), seat(seat) {}

void Course::registerStudent(const Student& student) {
    if (students.size() < static_cast<size_t>(seat)) {
        students.push_back(student);
    }
}

void Course::kick(int studentId) {
    for (auto it = students.begin(); it != students.end();) {
        if (it->getId() == studentId) {
            it = students.erase(it);
        } else {
            ++it;
        }
    }
}

void Course::print() const { 
    cout << "Course name: " << name << "\tTeacher : " << teacher.getFirstName() << " " << teacher.getLastName()
         << " ( " << teacher.getEmail() << ")\t Seat : " << seat << endl;
    /*cout << "Cource name" << setw(25) <<"Teacher" << setw(25) << "Mail" << setw(30) << "Seat" << endl;
    cout << name << setw(20) << teacher.getFirstName() << " " << teacher.getLastName()
         << setw(25) << teacher.getEmail() << setw(20) << seat << endl;*/
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;

    for (size_t i = 0; i < students.size(); i++) {
        const Student& s = students[i];
        cout << i + 1 << ". \t" << s.getId() << " \t" << s.getFirstName() << "\t" << s.getLastName() << endl;
    }
}

int Course::stud_num() const {
    return students.size();
}
const Student& Course::getStudent(int index) const {
    if (index >= 0 && index < students.size()) {
        return students[index];
    } else {
        return students[0];
    }
}
int randStu(int k) {
    return rand() % k;
}