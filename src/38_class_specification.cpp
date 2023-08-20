// Desc : class specification
// Date : unknown (20 aug) 2023

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;
    void get();
    void put()
    {
        cout << "\na : " << a;
        cout << "\nb : " << b;
    }
};

void A::get()
{
    cout << "Enter a , b : ";
    cin >> a >> b;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;
    A a1;
    a1.get();
    a1.put();
    // cout << "\na = " << a1.a;
    cout << "\nb = " << a1.b;
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}