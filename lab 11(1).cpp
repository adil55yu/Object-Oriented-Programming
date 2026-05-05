#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 3, int2 = 7;
    cout << "Max of " << int1 << " and " << int2 << " is: " 
         << findMax(int1, int2) << endl;

    double d1 = 4.5, d2 = 2.3;
    cout << "Max of " << d1 << " and " << d2 << " is: " 
         << findMax(d1, d2) << endl;

    string s1 = "apple", s2 = "banana";
    cout << "Max of \"" << s1 << "\" and \"" << s2 << "\" is: " 
         << findMax(s1, s2) << endl;

    return 0;
}