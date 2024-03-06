#include<iostream>
//#include<conio.h>
using namespace std;
int sum(int, int);
int sum(int, int, int);

int main(){
    
    cout<<sum(7, 3, 4)<<endl;
    cout<<sum(2, 9)<<endl;
    
}
int sum(int a, int b){
    return a + b;
}
int sum(int a, int b, int c){
    return a + b + c;
}