// Desc : pointer to derived class
// Date : 26 sep 2023

#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Show A" << endl;
    }
    void disp()
    {
        cout << "Disp A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "Show B" << endl;
    }
    void disp()
    {
        cout << "Disp B" << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x, *pa;
    B y, *pb;

    pa = &x;
    pa->showA();
    pa->disp();
    // pa->showB();

    cout << endl;

    pa = &y;
    pa->showA();
    pa->disp();
    // pa->showB();

    cout << endl;

    // pb = &x;
    // pb->showA();
    // pb->disp();
    // pb->showB();

    // cout << endl;

    pb = &y;
    pb->showA();
    pb->disp();
    pb->showB();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}