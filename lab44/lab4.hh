#ifndef ENGBUT_H
#define ENGBUT_H

#include <iostream>
using namespace std;

class EngBut {
    private:
        int hurtver;
        int huvaari;
        void simplify();
    public:
        EngBut();
        EngBut(int h, int v);
        friend istream& operator>>(istream &input, EngBut &eb);
        friend ostream& operator<<(ostream &output, const EngBut &eb);
        EngBut operator+(const EngBut &butarhai) const;
        EngBut operator-(const EngBut &butarhai) const;
        EngBut operator*(const EngBut &butarhai) const;
        EngBut operator/(const EngBut &butarhai) const;
        EngBut operator+(int num) const;
        EngBut operator-(int num) const;
        EngBut operator*(int num) const;
        EngBut operator/(int num) const;
};

#endif
