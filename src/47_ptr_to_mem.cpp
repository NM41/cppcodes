// Desc : pointers to member
// Date : 21 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void get()
    {
        cout << "Enter a : ";
        cin >> a;
    }
    void put()
    {
        cout << "Value of a : " << a << endl;
    }
    friend void sum(A x, A y);
};

void sum(A x, A y)
{
    int A ::*p = &A ::a;
    A *z;
    z = &y;
    cout << "x.a   : " << x.a << endl
         << "x.*p  : " << x.*p << endl
         << "z->a  : " << z->a << endl
         << "z->*p : " << z->*p << endl
         << "Sum   : " << (x.*p + z->*p);
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x, y, *z;
    void (A::*getfp)() = &A::get;
    void (A::*putfp)() = &A::put;

    z = &y;
    x.get();
    (y.*getfp)();
    (y.*putfp)();
    (z->*putfp)();
    sum(x, y);

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}