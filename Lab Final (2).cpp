#include <iostream>
using namespace std;

class Device {
protected:
    int powerWatts;

public:
    Device(int p) {
        powerWatts = p;
    }

    virtual void showDetails() = 0;
};

class Networked {
protected:
    string ipAddress;

public:
    Networked(string ip) {
        ipAddress = ip;
    }
};

class Router : public Device, public Networked {
public:
    Router(int p, string ip) : Device(p), Networked(ip) {}

    void showDetails() override {
        cout << "Power: " << powerWatts << " Watts" << endl;
        cout << "IP Address: " << ipAddress << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Device* devices[2];

    devices[0] = new Router(50, "192.168.1.1");
    devices[1] = new Router(75, "10.0.0.1");

    for (int i = 0; i < 2; i++) {
        devices[i]->showDetails();
    }

    for (int i = 0; i < 2; i++) {
        delete devices[i];
    }

    return 0;
}