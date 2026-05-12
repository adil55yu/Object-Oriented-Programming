#include <iostream>
using namespace std;

class Project {
private:
    float projectWeight;

public:
    Project(float p) {
        projectWeight = p;
    }

    float getProjectWeight() {
        return projectWeight;
    }
};

class Student {
private:
    float quizWeight;

public:
    Student(float q) {
        quizWeight = q;
    }

    float getQuizWeight() {
        return quizWeight;
    }

    float calculateTotal(Project p) {
        return quizWeight + p.getProjectWeight();
    }
};

int main() {

    Project p1(40);
    Student s1(30);

    cout << "Project Weight : "
         << p1.getProjectWeight() << "%" << endl;

    cout << "Quiz Weight    : "
         << s1.getQuizWeight() << "%" << endl;

    cout << "Total Weight   : "
         << s1.calculateTotal(p1) << "%" << endl;

    return 0;
}
