#include<iostream>
using namespace std;

class Square{
    public:
        float talbai(float a){
            return a * a;
        }
        float talbai(float a, float b){
            return a*b/2;
        }
};

int main(){
    Square Tal;
    cout<<"Dorvoljinii talbai: "<<Tal.talbai(4)<<endl;
    cout<<"Gurvaljinii talbai : "<<Tal.talbai(3, 4)<<endl;
    return 0;
}