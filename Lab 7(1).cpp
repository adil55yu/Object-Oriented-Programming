#include <iostream>
using namespace std;

class Circle;

class Rectangle {
private:
    double area;

public:
    Rectangle(double length, double width) {
        area = length * width;
    }

    friend void compareArea(Rectangle, Circle);
};

class Circle {
private:
    double area;

public:
    Circle(double radius) {
        area = 3.14 * radius * radius;
    }

    friend void compareArea(Rectangle, Circle);
};

void compareArea(Rectangle r, Circle c) {
    if (r.area > c.area) {
        cout << "Rectangle has larger area." << endl;
    } 
    else if (r.area < c.area) {
        cout << "Circle has larger area." << endl;
    } 
    else {
        cout << "Both have equal area." << endl;
    }
}

int main() {
    Rectangle rect(10, 5);
    Circle circ(4);

    compareArea(rect, circ);

    return 0;
}