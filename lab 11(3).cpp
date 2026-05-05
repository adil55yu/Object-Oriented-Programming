#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T subtract(T a, T b) { return a - b; }
    T multiply(T a, T b) { return a * b; }
    T divide(T a, T b) { return a / b; }
};

int main() {
    int type, choice;

    cout << "Select Data Type:\n1. Integer\n2. Floating Point\nChoice: ";
    cin >> type;

    cout << "\nSelect Operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nChoice: ";
    cin >> choice;

    if (type == 1) {
        int a, b;
        Calculator<int> calc;

        cout << "Enter two integers: ";
        cin >> a >> b;

        if (choice == 1) cout << "Result: " << calc.add(a, b);
        else if (choice == 2) cout << "Result: " << calc.subtract(a, b);
        else if (choice == 3) cout << "Result: " << calc.multiply(a, b);
        else if (choice == 4) {
            if (b != 0)
                cout << "Result: " << calc.divide(a, b);
            else
                cout << "Error: Division by zero!";
        }
    }
    else if (type == 2) {
        double a, b;
        Calculator<double> calc;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (choice == 1) cout << "Result: " << calc.add(a, b);
        else if (choice == 2) cout << "Result: " << calc.subtract(a, b);
        else if (choice == 3) cout << "Result: " << calc.multiply(a, b);
        else if (choice == 4) {
            if (b != 0)
                cout << "Result: " << calc.divide(a, b);
            else
                cout << "Error: Division by zero!";
        }
    }
    else {
        cout << "Invalid data type selection!";
    }

    return 0;
}