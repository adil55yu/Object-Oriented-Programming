#include <iostream>
using namespace std;

class Student {
private:
    int id;
    float gpa;

    void privateFunction() {
        cout << "Private Function Called" << endl;
    }

public:
    Student() {
        id = 0;
        gpa = 0.0;
        cout << "Default Constructor Called" << endl;
    }

    Student(int i, float g) {
        id = i;
        gpa = g;
        cout << "Parameterized Constructor Called" << endl;
    }

    Student(const Student& obj) {
        id = obj.id;
        gpa = obj.gpa;
        cout << "Copy Constructor Called" << endl;
    }

    void publicFunction() {
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
        privateFunction(); 
    }

    ~Student() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Student s1;              
    Student s2(101, 3.8);    
    Student s3 = s2;         

    s2.publicFunction();

    return 0;
}