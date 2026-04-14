#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0, double w = 0) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    double area(double l, double w) {
        return l * w;
    }

    bool operator==(Rectangle r) {
        return this->area() == r.area();
    }
};

int main() {
    Rectangle r1(5, 4);
    Rectangle r2(2, 10);

    cout << "Area of Rectangle 1: " << r1.area() << endl;
    cout << "Area of Rectangle 2: " << r2.area() << endl;

    cout << "Area using parameters (3,6): " << r1.area(3, 6) << endl;

    if (r1 == r2)
        cout << "Rectangles have equal area." << endl;
    else
        cout << "Rectangles do not have equal area." << endl;

    return 0;
}