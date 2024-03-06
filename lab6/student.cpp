#include<iostream>

using namespace std;

class student{
    int i;
    float f;
    public:
        student(): i(2), f(5.5){}
        float square(float f){
            this -> f = f * f;
            return this->f;
        }
        int square(int i){
            this->i = i * i;
            return this->i;
        }
        void show(){
            cout << "f= " << f << "\ni= " << i;
        }
};
int main(){
    student aa;
    aa.show();
    float ff = aa.square((float) 3.5);
    int ii = aa.square(3);
    cout << endl <<endl << "ff= " << ff << "\nii=" << ii <<endl;
}