// Desc : pointer to object
// Date : 24 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void get(int x)
    {
        a = x;
    }
    void put()
    {
        cout << "value of a : " << a << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a, *p;
    p = &a;
    p->get(10);
    p->put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}