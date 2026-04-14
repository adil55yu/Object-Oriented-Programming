#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imaginary = i;
    }

    Complex operator*(Complex c) {
        double r = (real * c.real) - (imaginary * c.imaginary);
        double i = (real * c.imaginary) + (imaginary * c.real);
        return Complex(r, i);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, 7);

    Complex result = c1 * c2;

    cout << "Result: ";
    result.display();

    return 0;
}