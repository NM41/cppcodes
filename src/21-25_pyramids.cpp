// Desc : pyramids 1 to 5
// Date : 12 aug 2023

#include <iostream>
using namespace std;

int n;
void getn()
{
    cout << "Enter n : ";
    // cin >> n;

    cout << "5" << endl;
    n = 5;
}

/*
5
5 4
5 4 3 ..*/
void pyramid1()
{
    getn();
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
            cout << j << " ";
        cout << endl;
    }
}

/*
5
4 5
3 4 5 ..*/
void pyramid2()
{
    getn();
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }
}

/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5..*/
void pyramid3()
{
    getn();
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }
}

/*
1
2 3
4 5 6 ..*/
void pyramid4()
{
    getn();
    for (int a = 1, i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, a++)
            cout << a << " ";
        cout << endl;
    }
}

/*
1
2 3
3 4 5 ..*/
void pyramid5()
{
    getn();
    for (int a = 1, i = 1, j; i <= n; i++)
    {
        for (a = i, j = 1; j <= i; j++, a++)
            cout << a << " ";
        cout << endl;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    // pyramid1();
    // pyramid2();
    // pyramid3();
    // pyramid4();
    pyramid5();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}