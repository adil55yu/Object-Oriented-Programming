#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }

    virtual void display() {
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

    void area() override {
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }

    void display() override {
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

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }

    void display() override {
        cout << "Rectangle with length: " << length 
             << " and width: " << width << endl;
    }
};

int main() {
    Shape* ptr;

    Circle c(5);
    Rectangle r(7, 6);

    ptr = &c;
    ptr->display();
    ptr->area();

    cout << endl;

    ptr = &r;
    ptr->display();
    ptr->area();

    return 0;
}