// Desc : input until num is -999 & print max and min
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int num, max, min;
    cout << "Enter a number : ";
    cin >> num;
    max = min = num;
    do
    {
        if (num > max)
            max = num;
        if (num < min)
            min = num;
        cout << "Enter a number : ";
        cin >> num;
    } while (num != -999);

    cout << endl
         << "Maximum number : " << max << endl;
    cout << "Minimum number : " << min << endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}