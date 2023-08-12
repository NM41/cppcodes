// Desc : palindrom number checking
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int tempnum = num;
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num /= 10;
    }
    if (sum == tempnum)
        cout << tempnum << " is a palindrome number.." << endl;
    else
        cout << tempnum << " is not a palindrome number.." << endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}