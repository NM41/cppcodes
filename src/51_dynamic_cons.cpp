// Desc : dynamic constructor
// Date : 22 sep 2023

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
        cout << "\n Default Cons";
    }
    String(char *s)
    {
        len = strlen(s);
        nm = new char[len + 1];
        strcpy(nm, s);
        cout << "\n Parameterized cons";
    }
    void disp()
    {
        cout << "\nName : " << nm;
    }
    friend String concat(String, String);
};

String concat(String s1, String s2)
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

    String s1("Neon "), s2("Parmar"), s3;
    s1.disp();
    s2.disp();
    s3 = concat(s1, s2);
    s3.disp();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}