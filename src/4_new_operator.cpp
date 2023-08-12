// Desc : new operator
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int *n;
    n = new int;
    *n = 100;
    // n = new int(100);
    cout << "Value of n \t: " << *n
         << endl
         << "Address of n \t: " << n;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}