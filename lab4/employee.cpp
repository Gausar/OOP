#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>

using namespace std;

class employee{
    private:
        char name[20];
        int basicpay;
        int allowance;
    public:
        employee(char n[] = "George", int b = 9000, int a = 2000){
            strcpy(name, n);
            basicpay = b;
            allowance = a;
        }
        void showdata();
        void changebasic();
};
void employee::changebasic(){
    basicpay = 10000;
}
void employee::showdata(){
    cout<<endl;
    cout<<setw(20)<<name;
    cout<<setw(8)<<basicpay;
    cout<<setw(12)<<allowance;
}

void heading(){
    cout<<endl;
    cout<<setw(20)<<"Employee Name";
    cout<<setw(8)<<"Basic";
    cout<<setw(12)<<"Allowance";
    cout<<endl;
}

int main(){
    clrscr();
    employee emp1;
    heading();
    emp1.showdata();
    emp1.changebasic();
    emp1.showdata();
    employee emp2;
    emp2.showdata();
    getch();
}