#include <iostream>
using namespace std;

class Hotel {
private:
    string name;
    mutable string placedorder;
    int tableno;
    mutable int bill;

public:
    Hotel(string n, string order, int table, int b) {
        name = n;
        placedorder = order;
        tableno = table;
        bill = b;
    }

    void showDetails() const {
        cout << "Customer Name: " << name << endl;
        cout << "Table Number: " << tableno << endl;
        cout << "Order: " << placedorder << endl;
        cout << "Bill: " << bill << endl;
    }

    void changeOrder(string newOrder, int newBill) const {
        placedorder = newOrder;
        bill = newBill;
        cout << "Order changed successfully!" << endl;
    }
};

int main() {

    const Hotel customer("Adil", "Biryani", 5, 500);

    customer.showDetails();

    cout << "\nChanging order within 10 minutes...\n";

    customer.changeOrder("Karahi", 700);

    cout << "\nUpdated Details:\n";
    customer.showDetails();

    return 0;
}