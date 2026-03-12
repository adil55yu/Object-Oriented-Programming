#include <iostream>
using namespace std;

struct Fruit {
    string name;
    int price;
    int quantity;
};

int main() {

    Fruit f[5];
    int Grand_total = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Enter Fruit " << i + 1 << " Name: ";
        cin >> f[i].name;

        cout << "Enter Price: ";
        cin >> f[i].price;

        cout << "Enter Quantity: ";
        cin >> f[i].quantity;

        cout << endl;
    }

    for(int i = 0; i < 5; i++) {
        Grand_total = Grand_total + (f[i].price * f[i].quantity);
    }

    cout << "\nFruit Details\n";

    for(int i = 0; i < 5; i++) {
        cout << "Fruit: " << f[i].name << endl;
        cout << "Price: " << f[i].price << endl;
        cout << "Quantity: " << f[i].quantity << endl;
        cout << "Total Cost: " << f[i].price * f[i].quantity << endl;
        cout << endl;
    }

    cout << "Grand Total = " << Grand_total << " rupees" << endl;

    return 0;
}