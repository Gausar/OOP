#include"subject.hh"

#include<cstdlib>

using namespace std;
int rand(int k){
    return rand() % k;
}

int main(){

    int N = 10;
    srand(time(0));
    //Student mkut_stud[N] = {};
    vector<Student> mkut_stud;

    for(int i = 0; i < N; i++){
        mkut_stud.push_back(Student(2000 + i, "Ner" + to_string(i), "Ovog" + to_string(i)));
    }

    Teacher magsar("Magsarjav", "Bataa", "magsarjav@gmail.com");
    Teacher ggtulga("Gantulga", "Gombojav", "ggtulga@gmail.com");

    Course oop("OOP in C++", magsar, 30);
    Course ds("Data Structures", ggtulga, 20);

    //1) rand(k) : 0 -ees k-1 hurtel int butsaadag

    for(int i = 0; i < N; i++){
        int c = randStu(3);
        if(c == 0){
            oop.registerStudent(mkut_stud[i]);
        }
        if(c == 1){
            ds.registerStudent(mkut_stud[i]);
        }
    }

    oop.print();
    /*
        Course name: OOP in C++     Teacher: Magsarjav Bataa (magsarjav@gmail.com)      Seat: 30
        -----------------------------------------------------------------------------
        1.  2003    Ner3    Ovog3
        2.  2007    Ner7    Ovog7
        ......
    */
    ds.print();
    /*
        Course name: Data Structures     Teacher: Gantulga Gombojav (ggtulga@gmail.com)      Seat: 20
        -----------------------------------------------------------------------------
        1.  2002    Ner2    Ovog2
        2.  2005    Ner5    Ovog5
        ......
    */

    for(int i = 0; i < oop.stud_num(); i++){
        int r = randStu(2);
        if(r == 0){
            oop.kick(oop.getStudent(i).getId());
        }
    }

    oop.print();

    for(int i = 0; i < ds.stud_num(); i++){
        int r = randStu(2);
        if(r == 0){
            ds.kick(ds.getStudent(i).getId());
        }
    }

    ds.print();

    //2) 3 classiin bux gishuun ugugdul : private
    // 3) 3 classaa header file + object bolgoj urdchilj compildej bgaad main.cpp dee ashiglana
    // 3 classiin methodiin implementationuud haragdaxgui
    // system include bin ees ajiluulval +1 onoo
    return 0;
}
