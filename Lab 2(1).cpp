#include <iostream>
using namespace std;

struct STUDENT {
    string name;
    int rollNo;
    string Uni_Name;
    int Year;
    int Semester;
};

int main() {

    STUDENT s[2];

    for(int i = 0; i < 2; i++) {
        cout << "Enter details of Student " << i + 1 << endl;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Roll Number: ";
        cin >> s[i].rollNo;

        cout << "University Name: ";
        cin >> s[i].Uni_Name;

        cout << "Year: ";
        cin >> s[i].Year;

        cout << "Semester: ";
        cin >> s[i].Semester;

        cout << endl;
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << " Details" << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Roll Number: " << s[i].rollNo << endl;
        cout << "University Name: " << s[i].Uni_Name << endl;
        cout << "Year: " << s[i].Year << endl;
        cout << "Semester: " << s[i].Semester << endl;
    }

    return 0;
}