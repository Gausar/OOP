#include"emp.hh"
using namespace std;
int main(){
    Employee* emp1 = new Employee("Gausar", 1000);
    list<Employee*> subs;
    subs.push_back(emp1);

    Manager* mgr = new Manager("Stan", 2000, subs);

    cout << mgr->name() << endl;
    cout << mgr->salary() << endl;

    cout << emp1->name() << endl;
    cout << emp1->salary() << endl;
    delete emp1;
    delete mgr;
    return 0;
}