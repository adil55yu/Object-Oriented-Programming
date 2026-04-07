#include <iostream>
using namespace std;

class Box {
private:
    double length, breadth, height;

public:
    Box(double l, double b, double h) {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }

    double calculateVolume() {
        return this->length * this->breadth * this->height;
    }
};

int main() {
    Box box1(2,3,7);
    Box box2(10,12,15);

    cout << "Volume of Box 1: " << box1.calculateVolume() << endl;
    cout << "Volume of Box 2: " << box2.calculateVolume() << endl;

    return 0;
}