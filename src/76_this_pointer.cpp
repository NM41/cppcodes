// Desc : this pointer
// Date : 26 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void get(int a)
    {
        this->a = a;
    }
    void put()
    {
        cout << "value of a : " << a << endl;
    }
    A max(A y)
    {
        if (a > y.a)
            return *this;
        else
            return y;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int a, b;
    A x, y, z;
    cout << "Enter two nos : " << endl;
    cin >> a >> b;
    x.get(a);
    y.get(b);
    z = x.max(y);
    x.put();
    y.put();
    z.put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}