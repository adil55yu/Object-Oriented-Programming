#include <iostream>
using namespace std;

template <typename T>
class Circle {
    T radius;

public:
    Circle(T r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle<int> c1(5);
    cout << "Circle with int radius 5:" << endl;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    Circle<double> c2(5.5);
    cout << "Circle with double radius 5.5:" << endl;
    cout << "Area: " << c2.getArea() << endl;
    cout << "Circumference: " << c2.getCircumference() << endl;

    return 0;
}