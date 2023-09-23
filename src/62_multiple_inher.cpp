// Desc : multiple inheritance
// Date : 23 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void geta()
    {
        cout << "Enter a : ";
        cin >> a;
    }
    void puta()
    {
        cout << "value of a : " << a << endl;
    }
};

class B
{
    int b;

public:
    void getb()
    {
        cout << "Enter b : ";
        cin >> b;
    }
    void putb()
    {
        cout << "value of b : " << b << endl;
    }
};

class C : public A, public B
{
    int c;

public:
    void getc()
    {
        cout << "Enter c : ";
        cin >> c;
    }
    void putc()
    {
        cout << "value of c : " << c << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    C c;
    c.geta();
    c.getb();
    c.getc();
    c.puta();
    c.putb();
    c.putc();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}