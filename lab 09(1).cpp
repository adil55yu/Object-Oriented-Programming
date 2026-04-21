#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Area of shape" << endl;
    }

    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }

    void display() {
        cout << "Circle with radius: " << radius << endl;
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
        cout << "Area of Rectangle: " << length * width << endl;
    }

    void display() {
        cout << "Rectangle with length: " << length 
             << " and width: " << width << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    c.display();
    c.area();

    cout << endl;

    r.display();
    r.area();

    return 0;
}