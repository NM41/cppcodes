// Desc : def - overload operator ++ with mem func and -- with frnd func
// Date : 23 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void put()
    {
        cout << "value of a : " << a << endl;
    }
    void operator++()
    {
        a += 1;
    }
    friend void operator--(A &x);
};

void operator--(A &x)
{
    x.a -= 1;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x(10);

    x.put();
    ++x;
    x.put();
    --x;
    x.put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}