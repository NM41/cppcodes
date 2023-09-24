// Desc : insertion and extraction operator overload
// Date : 24 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    friend istream &operator>>(istream &, A &);
    friend ostream &operator<<(ostream &, A &);
};
istream &operator>>(istream &din, A &r)
{
    cout << "Enter a : ";
    din >> r.a;
    cout << "Enter b : ";
    din >> r.b;
    return (din);
}
ostream &operator<<(ostream &dout, A &r)
{
    dout << endl
         << "value of a = " << r.a << endl
         << "value of b = " << r.b << endl;    
    return (dout);
}

int main()
{
    cout << "----------------------------------------------------------" << endl;
    A r1;
    cin >> r1;
    cout << r1;
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}