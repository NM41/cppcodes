// Desc : friend function
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class B; // Forward Declaration
class A
{
    int a;

public:
    void get()
    {
        cout << "Enter a:";
        cin >> a;
    }
    void put()
    {
        cout << "\n a =" << a;
    }
    friend int sum(A x, B y);
};
class B
{
    int b;

public:
    void get()
    {
        cout << "Enter b:";
        cin >> b;
    }
    void put()
    {
        cout << "\n b : " << b;
    }
    friend int sum(A x, B y);
};
int sum(A x, B y)
{
    return (x.a + y.b);
}

int main()
{
    cout << "----------------------------------------------------------" << endl;
    A x;
    B y;
    x.get();
    y.get();
    int z = sum(x, y);
    cout << "\n Object Of Class A";
    x.put();
    cout << "\n Object Of Class B ";
    y.put();
    cout << "\n Sum = " << z;
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}