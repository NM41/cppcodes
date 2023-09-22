// Desc : Parameterized Constructor
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class A
{
    int m, n;

public:
    A(int x, int y) // Parameterized Constructor
    {
        m = x;
        n = y;
        cout<<"Parameterized Constructor"<<endl;
    }
    void disp()
    {
        cout << "\n m =" << m;
        cout << "\n n =" << n;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x(100, 200);
    x.disp();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}