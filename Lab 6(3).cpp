#include <iostream>
using namespace std;

class Bank_Account {
protected:
    double balance;

public:
    Bank_Account(double b) {
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Bank_Account {
public:
    SavingsAccount(double b) : Bank_Account(b) {}

    void withdraw(double amount) {
        if (balance - amount < 1000) {
            cout << "Withdrawal denied. Minimum balance must be 1000." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Bank_Account {
public:
    CurrentAccount(double b) : Bank_Account(b) {}

    void withdraw(double amount) {
        if (balance - amount < 1000) {
            cout << "Withdrawal denied. Minimum balance must be 1000." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Balance: " << balance << endl;
        }
    }
};

int main() {
    SavingsAccount s(5000);
    CurrentAccount c(3000);

    s.deposit(1000);
    s.withdraw(4500);

    c.deposit(500);
    c.withdraw(2700);

    return 0;
}