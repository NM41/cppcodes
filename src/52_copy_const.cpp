// Desc : copy constructor
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 0;
        cout << "Default cons" << endl;
    }
    A(int x)
    {
        a = x;
        cout << "Parameterized cons" << endl;
    }
    A(A &a1)
    {
        a = a1.a;
        cout << "Copy cons" << endl;
    }
    void disp()
    {
        cout << " a : " << a << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1(20), a2(10), a4;
    A a3 = a2;
    a4 = a1;
    a1.disp();
    a2.disp();
    a3.disp();
    a4.disp();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}