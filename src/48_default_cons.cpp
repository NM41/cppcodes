// Desc : default constructor
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class A
{
    int m, n;

public:
    A() // Constructor
    {
        m = 0;
        n = 0;
        cout << "Default Constructor" << endl;
    }
    void disp()
    {
        cout << "\n m=" << m;
        cout << "\n n=" << n;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;
    A x; // Create an object x and call the Constructor function.
    x.disp();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}