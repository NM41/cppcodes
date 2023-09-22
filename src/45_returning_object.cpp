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
    A sum(A a2);
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

A A ::sum(A a2)
{
    A a3;
    a3.a = a + a2.a;
    return a3;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1, a2, a3;
    a1.get();
    a2.get();
    a1.put();
    a2.put();
    a3 = a1.sum(a2);
    a3.put();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}