// Desc : class to another class conversion
// Date : 24 sep 2023

#include <iostream>
using namespace std;

class B;
class A
{
    int a, b;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void put()
    {
        cout << "a : " << a << endl
             << "b : " << b << endl;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    // operator B();
};
class B
{
    int c;

public:
    B(A a1)
    {
        c = a1.geta() + a1.getb();
    }
    void put()
    {
        cout << "c : " << c << endl;
    }
    // friend class A;
};
// A :: operator B(){
//     B b1;
//     b1.c = a + b;
//     return b1;
// }

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1;
    a1.get(10, 20);
    B b1 = a1;
    a1.put();
    b1.put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}