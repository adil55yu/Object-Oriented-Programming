#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
        cout << "Vehicle Constructor Called" << endl;
    }

    virtual void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }

    virtual void start() {
        cout << "Vehicle is starting..." << endl;
    }
};

class Car : public Vehicle {
private:
    string fuelType;

public:
    Car(string b, int s, string f) : Vehicle(b, s) {
        fuelType = f;
        cout << "Car Constructor Called" << endl;
    }

    void display() override {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }

    void start() override {
        cout << "Car is starting with " << fuelType << " engine..." << endl;
    }
};

int main() {
    string brand, fuel;
    int speed;

    cout << "Enter Brand: ";
    cin >> brand;

    cout << "Enter Speed: ";
    cin >> speed;

    cout << "Enter Fuel Type: ";
    cin >> fuel;

    Car c(brand, speed, fuel);

    cout << "\n--- Display Output ---" << endl;
    c.display();

    cout << "\n--- Function Overriding Output ---" << endl;
    c.start();

    return 0;
}