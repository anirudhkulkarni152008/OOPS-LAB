#include <iostream>

using namespace std;

template <typename T>
T disp(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int mark1 = 85, mark2 = 94;
    cout << "Greater mark:-" << disp(mark1, mark2) << endl
         << endl;

    double price1 = 499.99, price2 = 749.50;
    cout << "Greater price: " << disp(price1, price2) << endl;

    float sensor1 = 3.7f, sensor2 = 4.8f;
    cout << "Greater sensor reading: " << disp(sensor1, sensor2) << endl;

    return 0;
}
