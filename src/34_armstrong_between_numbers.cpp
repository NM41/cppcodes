// Desc : armstrong lies between two numbers
// Date : unknown (20 aug) 2023

#include <iostream>
using namespace std;

void swapNums(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int fnum, snum;
    cout << "Enter two numbers : " << endl;
    cin >> fnum >> snum;
    if (fnum > snum)
        swapNums(&fnum, &snum);

    for (int i = fnum; i <= snum; i++)
    {
        int copyNum = i;
        int sum = 0;
        int rem;
        while (copyNum > 0)
        {
            rem = copyNum % 10;
            sum = sum + (rem * rem * rem);
            copyNum /= 10;
        }
        if (sum == i)
            cout << i << " ";
    }

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}