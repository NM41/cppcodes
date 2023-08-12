// Desc : prime number
// Date : 12 aug 2023

#include <iostream>
using namespace std;

void method1()
{
    int num, i;
    cout << "Enter a number : ";
    cin >> num;

    for (i = 2; i < num; i++)
        if (num % i == 0)
            break;
    if (num == i)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
}

void method2()
{
    int num, i;
    bool prime = true;
    cout << "Enter a number : ";
    cin >> num;
    if (num % 4 == 0)
        prime = false;
    for (i = 3; i <= num / 2; i += 2)
        if (num % i == 0)
            prime = false;
    if (prime)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;
    // method1();
    method2();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}