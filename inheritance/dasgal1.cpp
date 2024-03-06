#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        if (amount+balance <= 10000) {
            
            balance += amount;
            cout << "Hadgalamj amjilttai bolloo: " << balance << endl;
        } else {
            cout << "hyzgaar heterch bna " <<endl;
        }
    }
};

class CurrentAccount : public BankAccount {

public:
    CurrentAccount(double initialBalance) : BankAccount(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Orlogo amjilttai ::) " << balance << endl;
    }
};

int main() {
    BankAccount* account1 = new BankAccount(5000);
    account1->deposit(7000);  
    account1->deposit(12000); 

    CurrentAccount* account2 = new CurrentAccount(5000);
    account2->deposit(7000); 
    account2->deposit(12000);

    delete account1;
    delete account2;

    return 0;
}
