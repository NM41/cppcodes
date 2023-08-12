// Desc : delete operator
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int *n, i, sum = 0;
    n = new int[5];
    for (i = 0; i < 5; i++)
    {
        cout << "Enter value : ";
        cin >> n[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << endl
             << n[i];
        sum += n[i];
    }
    cout << endl
         << "Sum : " << sum;
    delete[] n;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}