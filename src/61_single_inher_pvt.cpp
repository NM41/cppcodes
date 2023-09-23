// Desc : single inheritance : privately inherited
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
        cout << "Value of a : " << a << endl;
    }
};

class B : private A
{
    int b;

public:
    void getb()
    {
        geta();
        cout << "Enter b : ";
        cin >> b;
    }
    void putb()
    {
        puta();
        cout << "value of b : " << b;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x;
    B y;
    x.geta();
    // x.getb();
    x.puta();
    // x.putb();
    // y.geta();
    y.getb();
    // y.puta();
    y.putb();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}