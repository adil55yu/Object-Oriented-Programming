#include <iostream>
using namespace std;

class polygon {
public:
    float length;
    float* width;

    polygon(float l, float w) {
        length = l;
        width = new float;
        *width = w;
    }

    polygon(const polygon& obj) {
        length = obj.length;
        width = new float;       
        *width = *(obj.width);   
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << *width << endl;
        cout << "Width Address: " << width << endl;
        cout << "-------------------" << endl;
    }

    
    ~polygon() {
        delete width;
    }
};

int main() {
    polygon one(10.5, 5.5);
    polygon two = one;   

    cout << "Before Modification:\n";
    one.display();
    two.display();

    
    *two.width = 20.0;

    cout << "\nAfter Modification (Changing width of two):\n";
    one.display();
    two.display();

    return 0;
}