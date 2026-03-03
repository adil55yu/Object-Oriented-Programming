#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    int cnic;
    int semester;
    string name;

public:
    void setall(int a, int c, int sem, string n) {
        age = a;
        cnic = c;
        semester = sem;
        name = n;
    }

    void displayall() {
        cout << "The entered data is:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    Student obj;
    obj.setall(20, 123456789, 5, "Ali");
    obj.displayall();

    Student anotherobj;
    anotherobj.setall(21, 987654321, 6, "Ahmed");
    anotherobj.displayall();

    return 0;
}