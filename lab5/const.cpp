#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class String{
    private:
        char* _s;
        int _len;
        void insert(const char* str){
            _len = strlen(str);
            if(_s) delete[] _s;
            _s = new char[_len + 1];
            strcpy(_s, str);
        }
    public:
        String(const char* str = "") : _s(0){
            insert(str);
        }
        String(const String& a) : _s(0){
            insert(a._s);
        }
        ~String(){
            if(_s){
                delete[] _s;
            }
        }
        int length() const{ return _len ; }
        const char* data() const {return _s; }
        String& operator = (const String& a){
            if(this != &a){
                insert(a. _s);
                return *this;
            }
        }
};
int main(){

}