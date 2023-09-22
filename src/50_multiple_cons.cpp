// Desc : multiple constructors
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class A
{
    int m, n;

public:
    A() // Default Constructor
    {
        cout << "\n Default Constructor";
        m = 0;
        n = 0;
    }
    A(int x, int y) // Parameterized Constructor
    {
        cout << "\n Parameterized Constructor";
        m = x;
        n = y;
    }
    void display()
    {
        cout << "\n m =" << m;
        cout << "\n n =" << n;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;
    A x;
    A y(100, 200);
    x.display();
    y.display();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}