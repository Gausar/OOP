#ifndef COURSE_HH
#define COURSE_HH
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Course {
private:
    string name;
    Teacher teacher;
    int seat;
    vector<Student> students;

public:
    Course(const string& name, const Teacher& teacher, int seat);
    void registerStudent(const Student& student);
    void kick(int studentId);
    const Student& getStudent(int index) const;
    int stud_num() const;
    void print() const;
};
int randStu(int k);
#endif