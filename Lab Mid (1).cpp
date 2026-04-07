#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;
};

int main() {
    Product p[3];
    float totalBill = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Product " << i + 1 << endl;
        cout << "Name: ";
        cin >> p[i].name;
        cout << "Price: ";
        cin >> p[i].price;
        cout << "Quantity: ";
        cin >> p[i].quantity;
        cout << endl;
    }

    cout << "\n--- Product Details ---\n";
    for (int i = 0; i < 3; i++) {
        float cost = p[i].price * p[i].quantity;

        cout << "Product " << i + 1 << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Price: " << p[i].price << endl;
        cout << "Quantity: " << p[i].quantity << endl;
        cout << "Total Cost: " << cost << endl;
        cout << "----------------------\n";

        totalBill += cost;
    }

    cout << "\nFinal Total Bill: " << totalBill << endl;

    return 0;
}
