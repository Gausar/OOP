#include<iostream>
#include<math.h>

using namespace std;
#define pi 3.14
class area{
    public:
        float talbai(float a, float b){
            return a*b;
        }
        float talbai(float a, float b, float c){
            float k;
            k = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2*a*b)); 
            float sinK = sqrt(1-pow(cos(k), 2));
            return a*b*sinK/2;
        }
        float talbai(float r){
            return pi*r*r;
        }
};
int main(){
    area t;
    cout<<"Dorvoljinii talbai : "<<t.talbai(4, 5)<<endl;
    cout<<"Gurvaljinii talbai : "<<t.talbai(3, 4, 5)<<endl;
    cout<<"Toirgiin talbai : "<<t.talbai(5)<<endl;
    return 0;
}