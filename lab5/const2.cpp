#include<iostream>

using namespace std;

class String{
    public:
        String& operator+=(const String& other){
            int newlen = _len + other._len;
            char* newst = new char[newlen + 1];

            strcpy(newstr, _s);
            strcpy(newstr+_len, other._s);

            if(_s){
                delete[] _s;
            }
            _s = newstr;
            _len = newlen;
            return *this;
        }
};