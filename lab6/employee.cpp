#include<iostream>
#include<cstdio>
#include<iomanip>
//#include<conio.h>
#include<string.h>

using namespace std;

class employee{
    private:
        char name[20];
        int basicpay;
        int allowance;
    public:
        void getdata(void);
        void showdata(void);
        void showdata(char);
        void showdata(employee);
};
void employee::getdata(){
    cout<<"\nEnter the employee Name : ";
    cin.getline(name, sizeof(name));
    cout << "Enter the Basic Pay : ";
    cin >> basicpay;
    cout << "Enter the Allowance: ";
    cin >> allowance;
}

void employee::showdata(){
    cout << endl;
    cout << setw(20) << "Employee Name";
    cout << setw(8) << "Basic";
    cout << setw(12) << "Allowance";
    cout << setw(8) << "Gross";
}
void employee::showdata(char ch){
    cout<<endl;
    for(int k = 1; k < 49; k++){
        cout<<ch;
    }
}
void employee::showdata(employee e){
    int grosspay = e.basicpay + e.allowance;
    cout << endl;
    cout << setw(20) << e.name;
    cout << setw(8) << e.basicpay;
    cout << setw(12) << e.allowance;
    cout.width(8);
    cout << grosspay << endl;
}
int main(){
    employee emp;
    emp.getdata();
    emp.showdata('-');
    emp.showdata();
    emp.showdata('-');
    emp.showdata(emp);
    //getch();
    return 0;
}