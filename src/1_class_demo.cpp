// Desc : demo prog of class
// Date : unknown (12 aug) 2023

#include <iostream>
using namespace std;

class Demo
{
private:
    int a, b;

public:
    void input();
    void output()
    {
        cout << endl
             << "a : " << a << endl
             << "b : " << b;
    }
};

void Demo::input()
{
    cout << "Enter two nos : " << endl;
    cin >> a >> b;
}
int main()
{
    cout << "----------------------------------------------------------" << endl;

    Demo d;
    d.input();
    d.output();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}