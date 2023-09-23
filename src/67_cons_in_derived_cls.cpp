// Desc : constructor in derived class
// Date : 23 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        cout << "Base Constructor" << endl;
        a = x;
    }
    void dispA()
    {
        cout << "value of a : " << a << endl;
    }
};
class B : public A
{
    int b;

public:
    B(int x, int y) : A(x)
    {
        cout << "Derive Constructor" << endl;
        b = y;
    }
    void dispB()
    {
        cout << "value of b : " << b << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    B x(10, 20);
    x.dispA();
    x.dispB();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}