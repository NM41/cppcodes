// Desc : hybrid inheritance
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

class B : public A
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

class C
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

class D : public B, public C
{
    int d;

public:
    void getd()
    {
        cout << "Enter d : ";
        cin >> d;
    }
    void putd()
    {
        cout << "value of d : " << d << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    D d;
    d.geta();
    d.getb();
    d.getc();
    d.getd();
    d.puta();
    d.putb();
    d.putc();
    d.putd();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}