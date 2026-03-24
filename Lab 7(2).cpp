#include <iostream>
using namespace std;

class Car;

class Engine {
public:
    void increaseHorsepower(Car &c);
};

class Car {
private:
    int horsepower;

public:
    Car(int hp) {
        horsepower = hp;
    }

    void display() {
        cout << "Horsepower: " << horsepower << endl;
    }

    friend class Engine;
};

void Engine::increaseHorsepower(Car &c) {
    c.horsepower += 50;
}

int main() {
    Car myCar(100);
    Engine eng;

    cout << "Before increase:" << endl;
    myCar.display();

    eng.increaseHorsepower(myCar);

    cout << "After increase:" << endl;
    myCar.display();

    return 0;
}