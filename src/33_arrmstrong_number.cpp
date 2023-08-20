// Desc : check armstrong number or not
// Date : unknown (20 aug) 2023

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int number, sum = 0;
    cout << "Enter a number : ";
    cin >> number;
    int copyNum = number;
    while (number > 0)
    {
        int rem = number % 10;
        sum = sum + (rem * rem * rem);
        number /= 10;
    }
    if (sum == copyNum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}