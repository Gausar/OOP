#include "lab3.hh"
#include <iostream>

using namespace std;

int main()
{
        Fifo f(4);
        f.write('a');
        cout<< f.read() << endl; //a
        cout<< f.read() << endl; //..
        f.write('b');//b
        f.write('c');//b c
        f.write('d');//b c d
        f.write('e');//b c d e
        f.write('f');//b c d e
        cout<< f.read() << endl; //c d e
        cout<< f.nitems() << endl;//3
        f.write('g'); //c d e g
        cout<< f.nitems() << endl; //4
        cout<< f.read() << endl;
        cout<< f.read() << endl;
        cout<< f.read() << endl;
        cout<< f.read() << endl;    
        return 0;
}
