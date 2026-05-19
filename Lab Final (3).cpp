#include <iostream>
#include <string>
using namespace std;

template <class T>
void swapValues(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <class T>
class Storage
{
private:
    T data;

public:
    Storage(T value)
    {
        data = value;
    }

    void setData(T val)
    {
        data = val;
    }

    T getData()
    {
        return data;
    }
};

int main()
{
    int x = 10, y = 20;

    cout << "Before Swap: ";
    cout << "x = " << x << " y = " << y << endl;

    swapValues(x, y);

    cout << "After Swap: ";
    cout << "x = " << x << " y = " << y << endl;

    Storage<int> intObj(100);

    Storage<string> strObj("Adil");

    cout << "Integer Data: " << intObj.getData() << endl;
    cout << "String Data: " << strObj.getData() << endl;

    return 0;
}