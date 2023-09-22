// Desc : insertion and extersion operator overloading
// Date : 21 sep 2023

#include <iostream>
#include <ostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout << endl
             << "a : " << a << endl;
    }
    ostream &operator<<(ostream &x)
    {
        return x;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1(10), a2(20);
    cout << 10;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}