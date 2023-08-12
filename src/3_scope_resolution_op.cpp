// Desc : scope resolution operator
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int a = 10;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int a = 100;
    {
        int a = 1000;
        cout << endl
             << "a\t: " << a;
        cout << endl
             << "::a\t: " << ::a;
    }
    cout << endl
         << "a\t:" << a;
    cout << endl
         << "::a\t:" << ::a;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}