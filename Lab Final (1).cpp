#include <iostream>
using namespace std;

class Employee {
protected:
    double baseSalary;

public:
    Employee(double salary) {
        baseSalary = salary;
    }

    virtual double calculatePay() {
        return baseSalary;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(double salary, double b) : Employee(salary) {
        bonus = b;
    }

    double calculatePay() override {
        return baseSalary + bonus;
    }
};

int main() {
    Employee emp(50000);
    Manager mgr(70000, 15000);

    cout << "Employee Pay: " << emp.calculatePay() << endl;
    cout << "Manager Pay: " << mgr.calculatePay() << endl;

    return 0;
} 