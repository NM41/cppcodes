// Desc : class to basic conversion
// Date : 24 sep 2023

#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void put()
    {
        cout << "a : " << a << endl
             << "b : " << b << endl;
    }
    operator int()
    {
        return (a + b);
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A a1;
    a1.get(10, 20);
    a1.put();
    int sum = a1;
    cout << "Sum : " << sum;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}