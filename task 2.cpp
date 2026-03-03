#include <iostream>
using namespace std;

class Student {
private:
    int ID;
    float* grades;
    int numGrades;

public:

    Student(int id, int n) {
        ID = id;
        numGrades = n;
        grades = new float[numGrades];
    }

    Student(const Student& other) {
        ID = other.ID;
        numGrades = other.numGrades;

        grades = new float[numGrades];
        for (int i = 0; i < numGrades; i++) {
            grades[i] = other.grades[i];
        }
    }

    void shallowCopy(Student& other) {
        ID = other.ID;
        numGrades = other.numGrades;
        grades = other.grades;
    }

    void setGrades() {
        for (int i = 0; i < numGrades; i++) {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grades[i];
        }
    }

    void modifyGrade(int index, float value) {
        if (index >= 0 && index < numGrades) {
            grades[index] = value;
        }
    }

    void display() {
        cout << "ID: " << ID << endl;
        cout << "Grades: ";
        for (int i = 0; i < numGrades; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
    }

    ~Student() {
        delete[] grades;
    }
};

int main() {

    int id, n;

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter number of grades: ";
    cin >> n;

    Student student1(id, n);
    student1.setGrades();

    cout << "\n--- Student1 ---\n";
    student1.display();

    Student student2(0,0);
    student2.shallowCopy(student1);

    cout << "\nAfter Shallow Copy:\n";
    student2.display();

    cout << "\nModifying student1 grade[0] to 100...\n";
    student1.modifyGrade(0, 100);

    cout << "\nStudent1:\n";
    student1.display();

    cout << "Student2:\n";
    student2.display();

    Student student3 = student1;

    cout << "\nAfter Deep Copy:\n";
    student3.display();

    cout << "\nModifying student1 grade[0] to 50...\n";
    student1.modifyGrade(0, 50);

    cout << "\nStudent1:\n";
    student1.display();

    cout << "Student3:\n";
    student3.display();

    return 0;
}