// Desc : pascal's triangle
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int fact(int x)
{
    int fact = 1;
    if (x == 0 || x == 1)
        fact = 1;
    else
        for (int i = x; i >= 1; i--)
            fact = fact * i;
    return fact;
}
void pascal_triangle()
{
    int i, j, ncx, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {
            ncx = fact(i) / (fact(j) * fact(i - j));
            cout << ncx << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    pascal_triangle();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}