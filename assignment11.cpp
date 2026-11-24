#include <iostream>
using namespace std;

template <typename T>
void swapV(T a, T b)
{
    T c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 10, b = 20;
    cout << "BEFORE SWAPING:-" << a << " " << b << endl;
    swapV(a, b);
    cout << "AFTER SWAPING:- " << b << " " << a << endl;

    float d = 2.5, q = 5.5;
    cout << "BEFORE SWAPING:-" << d << "  " << q << endl;

    swapV(d, q);

    cout << "AFTER SWAPING:- " << q << " " << d << endl;

    char p1 = 'x', m1 = 'l';

    cout << "BEFORE SWAPING:-" << p1 << " " << m1 << endl;
    swapV(p1, m1);
    cout << "AFTER SWAPING:- " << m1 << " " << p1 << endl;

    return 0;
}
