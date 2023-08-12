// Desc : series
// Date : unknown (12 aug) 2023

#include <iostream>
using namespace std;

int n = 0;
void getn()
{
    cout << "Enter n :";
    cin >> n;
}

// 1 3 5 7 9 ...
void series1()
{
    getn();
    for (int i = 1; i <= n * 2; i += 2)
        cout << i << " ";
    cout << endl;
}

// 1 4 7 10 ...
void series2()
{
    getn();
    for (int i = 1; i <= n * 3; i += 3)
        cout << i << " ";
    cout << endl;
}

// 0 2 6 12 20 ....
void series3()
{
    getn();
    int a = 0, x = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += (x += 2);
    }
}

// 1 2 6 24 120
void series4()
{
    getn();
    for (int x = 1, i = 2; i <= n + 1; x *= i, i++)
        cout << x << " ";
}

// 1 2 4 8 16
void series5()
{
    getn();
    for (int a = 1, i = 1; i <= n; i++, a *= 2)
        cout << a << " ";
}

// 1 2 4 10 34 ...
void series6()
{
    getn();
    int a = 1, b = 1, i;
    for (i = 2; i <= n + 1; a += b, b *= i, i++)
        cout << a << " ";
}

// fibonanci series : 0 1 1 2 3 5 8 ...
void series7()
{
    getn();
    int a = -1, b = 1, res, i;
    for (i = 1; i <= n; i++)
    {
        res = a + b;
        cout << res << " ";
        a = b;
        b = res;
    }
}

// 151 151 152 153 155 ...
void series8()
{
    getn();
    int a = 1, b = 0, res, i;
    for (i = 1; i <= n; i++)
    {
        res = a + b;
        cout << (res + 150) << " ";
        a = b;
        b = res;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    // series1();
    // series2();
    // series3();
    // series4();
    // series5();
    // series6();
    // series7();
    series8();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}