// Desc :
//  9 : enter side and check whether its valid sides of triangle or not
//  10: calculate the area of triangle
//  11: shape of triangle : scalene, isosceles, equilatral

// Date : unknown (12 aug) 2023

#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    int a = -1, b = -1, c = -1;
    bool isEmptySides()
    {
        if (a > 0 && b > 0 && c > 0)
            return false;
        return true;
    }

public:
    void getSides();
    void validate();
    void area();
    void shape();
};
void Triangle::getSides()
{
    cout << "Enter three sides of triangle : " << endl;
    cin >> a >> b >> c;
}

void Triangle::validate()
{
    if (isEmptySides())
    {
        getSides();
        validate();
    }
    else
    {
        if (a < (b + c) && b < (a + c) && c < (a + b))
            cout << "This is 'Valid' triangle.." << endl;
        else
            cout << "This is not valid triangle.." << endl;
    }
}

void Triangle::area()
{
    if (isEmptySides())
    {
        getSides();
        area();
    }
    else
    {
        double s, area;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of trialgle : " << area << endl;
    }
}

void Triangle::shape()
{
    if (isEmptySides())
    {
        getSides();
        shape();
    }
    else
    {
        cout << "Shape : ";
        if (a == b && b == c)
            cout << "Equilatral";
        else if (a == b || b == c || c == a)
            cout << "Isosceles";
        else
            cout << "Scalene";
        cout << " Trialgle" << endl;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Triangle t;
    t.getSides();
    t.validate();
    t.area();
    t.shape();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}