#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

    static int accountCount;

public:
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
        accountCount++;
    }

    void deposit(double amount) {
        this->balance = this->balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            this->balance = this->balance - amount;
        }
        else {
            cout << "Insufficient balance" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    static int getAccountCount() {
        return accountCount;
    }
};

int BankAccount::accountCount = 0;

int main() {

    BankAccount acc1(101, 4000);
    BankAccount acc2(102, 3000);

    acc1.deposit(1000);
    acc1.withdraw(2000);

    cout << "Balance of Account 1: " << acc1.getBalance() << endl;
    cout << "Balance of Account 2: " << acc2.getBalance() << endl;

    cout << "Total Accounts Created: " << BankAccount::getAccountCount() << endl;

    return 0;
}