// Desc : input two num and display all prime number lies between
// Date : 12 aug 2023

#include <iostream>
using namespace std;

void allPrimeBetween()
{
    int a, b;
    bool prime = true;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                prime = false;
        }
        if (prime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    allPrimeBetween();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}