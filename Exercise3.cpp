#include <iostream>

using namespace std;

int main()
{
    int a, b, c, *p1, *p2, *p3;

    a = 10;
    b = 15;
    p1 = &b;
    p2 = p1;
    c = 27;
    cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3 << "\n\n";

    p1 = &c;
    a = *p1;
    p3 = &b;
    *p2 = 8;
    cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3;

    return 0;
}