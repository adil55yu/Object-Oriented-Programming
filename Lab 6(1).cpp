#include <iostream>
using namespace std;

class Staff {
private:
    int staffID;

public:
    Staff(int id) {
        staffID = id;
    }

    int getStaffID() {
        return staffID;
    }
};

class Professor : public Staff {
private:
    int departmentID;
    string departmentName;

public:
    Professor(int id, int depID, string depName) : Staff(id) {
        departmentID = depID;
        departmentName = depName;
    }

    int getDepartmentID() {
        return departmentID;
    }

    string getDepartmentName() {
        return departmentName;
    }
};

class VisitingProfessor : public Professor {
private:
    int no_of_courses;
    double salary_per_course;

public:
    VisitingProfessor(int id, int depID, string depName, int courses, double salary)
        : Professor(id, depID, depName) {
        no_of_courses = courses;
        salary_per_course = salary;
    }

    double totalSalary() {
        return no_of_courses * salary_per_course;
    }

    void display() {
        cout << "Staff ID: " << getStaffID() << endl;
        cout << "Department ID: " << getDepartmentID() << endl;
        cout << "Department Name: " << getDepartmentName() << endl;
        cout << "Number of Courses: " << no_of_courses << endl;
        cout << "Salary per Course: " << salary_per_course << endl;
        cout << "Total Salary: " << totalSalary() << endl;
    }
};

int main() {
    VisitingProfessor vp(101, 10, "Computer Science", 3, 50000);
    vp.display();
    return 0;
}