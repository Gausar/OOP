#include<iostream>
#include<math.h>

using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        void utga(){
            cout<<"complex too : ";
            cin>>real>>imaginary;
        }
        int absolute(){
            int abs = sqrt(real*real + imaginary*imaginary);
            return abs;
        }
};

int main(){
    Complex a;
    a.utga();
    int absolute_utga = a.absolute();
    cout<<"absolute utga ni : ";
    cout<<absolute_utga<<endl;
    return 0;
}