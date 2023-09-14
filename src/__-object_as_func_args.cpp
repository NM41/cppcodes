// Desc : object as function arguments
// Date : 11 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void get();
    void put();
    void sum(A a1, A a2);
    void sum(A a2);
};

void A ::get()
{
    cout << "Enter a : ";
    cin >> a;
}

void A ::put()
{
    cout << "Value of a : " << a << endl;
}

void A ::sum(A a1, A a2)
{
    cout << "Sum : " << a1.a + a2.a << endl;
}

void A ::sum(A a2)
{
    cout << "Sum : " << a + a2.a << endl;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1, a2;
    a1.get();
    a2.get();
    a1.put();
    a2.put();
    a1.sum(a1, a2);
    a1.sum(a2);
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}