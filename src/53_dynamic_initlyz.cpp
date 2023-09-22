// Desc : dynamic initialization
// Date : 22 sep 2023

#include <iostream>
#include <cmath>
using namespace std;

class FD
{
    long int p;
    float r, amt;
    int n;

public:
    FD() {}
    FD(long int p1, int n1, float r1);
    FD(long int p1, int n1, int r1);
    void disp()
    {
        cout << endl
             << "p : " << p << endl
             << "r : " << r << endl
             << "n : " << n << endl
             << "amt : " << amt << endl;
    }
};

FD ::FD(long int p1, int n1, float r1)
{
    p = p1;
    n = n1;
    r = r1;
    amt = p * pow((1.0 + r), n);
}

FD ::FD(long int p1, int n1, int r1)
{
    p = p1;
    n = n1;
    r = r1;
    amt = p * pow((1.0 + r/100), n);
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    long int p;
    float r;
    int n, r1;

    cout << "Enter p, n, r (float) : ";
    cin >> p >> n >> r;
    FD fd1(p, n, r);
    cout << "Enter p, n, r (int) : ";
    cin >> p >> n >> r1;
    FD fd2(p, n, r1);

    fd1.disp();
    fd2.disp();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}