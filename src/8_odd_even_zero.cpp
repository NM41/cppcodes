// Desc : inpit num, check: odd even zero
// Date : unknown (12 aug) 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num == 0)
        cout << "Zero" << endl;
    else if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}