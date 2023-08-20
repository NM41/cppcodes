// Desc : power of a number
// Date : unknown (20 aug) 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int base, exp, power = 1;
    cout << "Enter base \t: ";
    cin >> base;
    cout << "Enter exponent\t :";
    cin >> exp;
    int e = exp;
    while (exp > 0)
    {
        power *= base;
        exp--;
    }
    cout << base << " raised to power of " << e << " : " << power;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}