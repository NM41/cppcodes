// Desc : overload operator for string object
// Date : 23 sep 2023

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *nm;
    int len;

public:
    String()
    {
        len = 0;
        nm = new char[len + 1];
        cout << "Default Dynamic" << endl;
    }
    String(char *s)
    {
        len = strlen(s);
        nm = new char[len + 1];
        strcpy(nm, s);
        strcat(nm, s);
        cout << "Parameterized Dynamic" << endl;
    }

    void disp()
    {
        cout << "Name : " << nm << endl;
    }

    friend String operator+(String s1, String s2);
   int operator==(String s2)
    {
        if (strcmp(nm, s2.nm) == 0)
            return 1;
        else
            return 0;
    }
};

String operator+(String s1, String s2)
{
    String s3;
    s3.len = s1.len + s2.len;
    s3.nm = new char[s3.len + 1];
    strcpy(s3.nm, s1.nm);
    strcat(s3.nm, s2.nm);
    return s3;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    char nm1[20], nm2[20];
    cout << "Enter two strings : " << endl;
    cin >> nm1 >> nm2;

    String s1(nm1), s2(nm2), s3;
    s1.disp();
    s2.disp();
    s3 = s1 + s2;
    s3.disp();
    if (s1 == s2)
        cout << "Equal";
    else
        cout << "Not equal";

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}