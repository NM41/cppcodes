// Desc : static memver vars & funcs
// Date : 11 sep 2023

#include <iostream>
using namespace std;

class A
{
    static int a;
    int b = 10;

public:
    // void setValues()
    // {
    //     cout << "Enter value for b : ";
    //     cin >> b;
    // }
    void display()
    {
        cout << "Value of a : " << a++ << endl
             << "Value of b : " << b++ << endl;
    }

    static void show()
    {
        cout << "\nValue of a : " << a++ << endl;
        // cout<<"Value of b : "<<b++;
    }
};

int A ::a;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    A x, y, z;
    // x.setValues();
    // y.setValues();
    // z.setValues();
    x.display();
    y.display();
    z.display();
    A::show();
    x.show();
    // y.show();
    // z.show();
    // A::show();
    // x.display();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}