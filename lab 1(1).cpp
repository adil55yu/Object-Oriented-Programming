#include <iostream>
using namespace std;

class Shape {
public:
    string color;
    string shapeName;
    float length;
    float width;

    void setData(string c, string s, float l, float w) {
        color = c;
        shapeName = s;
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

int main() {
    Shape s1;

    s1.setData("Red", "Rectangle", 5, 4);

    cout << "Color: " << s1.color << endl;
    cout << "Shape Name: " << s1.shapeName << endl;
    cout << "Area of Shape: " << s1.area() << endl;

    return 0;
}