#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {}
    virtual void display() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    void display() {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Rectangle Area: " << length * width << endl;
    }

    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4,6);

    c.display();
    c.area();

    r.display();
    r.area();

    return 0;
}