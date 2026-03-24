#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    friend void increment(Number &n);
};

void increment(Number &n) {
    n.value++;
}

int main() {
    Number num(10);

    cout << "Before increment:" << endl;
    num.display();

    increment(num);

    cout << "After increment:" << endl;
    num.display();

    return 0;
}