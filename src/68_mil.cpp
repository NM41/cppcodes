// Desc : MIL (Multiple Initilization List)
// Date : 23 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a1, a2;

public:
    A(int x, int y) : a1(x), a2(2 * y)
    {
        cout << "Base Constructor" << endl;
    }
    void dispA()
    {
        cout << "a1 : " << a1 << "\t a2 : " << a2 << endl;
    }
};
class B : public A
{
    int b1, b2;

public:
    B(int a, int b, int c, int d) : A(a, b), b1(c)
    {
        cout << "Derive Constructor" << endl;
        b2 = d;
    }
    void dispB()
    {
        cout << "b1 : " << b1 << "\t b2 : " << b2 << endl;
    }
};
int main()
{
    cout << "----------------------------------------------------------" << endl;
    B x(10, 15, 20, 25);
    x.dispA();
    x.dispB();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}