// Desc : Destructors
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class A
{
    static int a;

public:
    A()
    {
        a++;
        cout << "Object Created : " << a << endl;
    }
    ~A()
    {
        cout << "Object Destroyed : " << a << endl;
        a--;
    }
};
int A::a;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1;
    {
        A a2;
    }
    A a3;
    {
        A a4;
    }
    A a5;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}