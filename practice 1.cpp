#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int id;
    int age;

public:
    void inputBasicInfo() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Age: ";
        cin >> age;
    }

    float getGradePoint(float marks) {
        if (marks >= 85) return 4.0;
        else if (marks >= 80) return 3.7;
        else if (marks >= 75) return 3.3;
        else if (marks >= 70) return 3.0;
        else if (marks >= 65) return 2.7;
        else if (marks >= 60) return 2.3;
        else if (marks >= 55) return 2.0;
        else if (marks >= 50) return 1.7;
        else return 0.0;
    }

    virtual void display() = 0;
    virtual float calculateGPA() = 0;
};

class UndergraduateStudent : public Student {
private:
    float* marks;
    int subjects;

public:
    void inputMarks() {
        cout << "Enter number of undergraduate subjects: ";
        cin >> subjects;

        marks = new float[subjects];

        cout << "Enter marks:\n";
        for (int i = 0; i < subjects; i++) {
            cout << "Course " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    float calculateGPA() override {
        float total = 0;
        for (int i = 0; i < subjects; i++) {
            total += getGradePoint(marks[i]);
        }
        return total / subjects;
    }

    void display() override {
        cout << "\n--- Undergraduate Student ---\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }

    ~UndergraduateStudent() {
        delete[] marks;
    }
};

class GraduateStudent : public Student {
private:
    float* marks;
    int subjects;

public:
    void inputMarks() {
        cout << "Enter number of graduate subjects: ";
        cin >> subjects;

        marks = new float[subjects];

        cout << "Enter marks:\n";
        for (int i = 0; i < subjects; i++) {
            cout << "Course " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    float calculateGPA() override {
        float total = 0;
        for (int i = 0; i < subjects; i++) {
            total += getGradePoint(marks[i]);
        }
        return total / subjects;
    }

    void display() override {
        cout << "\n--- Graduate Student ---\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }

    ~GraduateStudent() {
        delete[] marks;
    }
};

int main() {
    Student* s;

    UndergraduateStudent u;
    GraduateStudent g;

    cout << "\nEnter Undergraduate Student Details:\n";
    u.inputBasicInfo();
    u.inputMarks();

    cout << "\nEnter Graduate Student Details:\n";
    g.inputBasicInfo();
    g.inputMarks();

    s = &u;
    s->display();

    s = &g;
    s->display();

    return 0;
}