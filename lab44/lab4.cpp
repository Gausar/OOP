#include"lab4.hh"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void EngBut::simplify() {
    int c = gcd(abs(hurtver), abs(huvaari));
    hurtver /= c;
    huvaari /= c;
}

EngBut::EngBut() {
    hurtver = 0;
    huvaari = 1;
}

EngBut::EngBut(int hurt, int huv) {
    hurtver = hurt;
    if (huv == 0) {
        cout<<"Butarhain huvaari 0 baina"<<endl;
        exit(0);
    }
    huvaari = huv;
    simplify();
}

istream& operator>>(istream &input, EngBut &butarhai) {
    char slash;
    input >> butarhai.hurtver >> slash >> butarhai.huvaari;
    if (butarhai.huvaari == 0) {
        cout<<"Butarhain huvaari 0 baina"<<endl;
        exit(0);
    }
    butarhai.simplify();
    return input;
}

ostream& operator<<(ostream &output, const EngBut &butarhai) {
    output << butarhai.hurtver << "/" << butarhai.huvaari;
    return output;
}

EngBut EngBut::operator+(const EngBut &butarhai) const {
    EngBut result;
    result.hurtver = hurtver * butarhai.huvaari + butarhai.hurtver * huvaari;
    result.huvaari = huvaari * butarhai.huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator-(const EngBut &butarhai) const {
    EngBut result;
    result.hurtver = hurtver * butarhai.huvaari - butarhai.hurtver * huvaari;
    result.huvaari = huvaari * butarhai.huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator*(const EngBut &butarhai) const {
    EngBut result;
    result.hurtver = hurtver * butarhai.hurtver;
    result.huvaari = huvaari * butarhai.huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator/(const EngBut &butarhai) const {
    if (butarhai.hurtver == 0) {
        cout<<"0 - d huvaagdahgui";
    }
    EngBut result;
    result.hurtver = hurtver * butarhai.huvaari;
    result.huvaari = huvaari * butarhai.hurtver;
    result.simplify();
    return result;
}

EngBut EngBut::operator+(int num) const {
    EngBut result;
    result.hurtver = hurtver + num * huvaari;
    result.huvaari = huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator-(int num) const {
    EngBut result;
    result.hurtver = hurtver - num * huvaari;
    result.huvaari = huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator*(int num) const {
    EngBut result;
    result.hurtver = hurtver * num;
    result.huvaari = huvaari;
    result.simplify();
    return result;
}

EngBut EngBut::operator/(int num) const {
    if (num == 0) {
        cout<<"0-d huvaagdahgui";
    }
    EngBut result;
    result.hurtver = hurtver;
    result.huvaari = huvaari * num;
    result.simplify();
    return result;
}
