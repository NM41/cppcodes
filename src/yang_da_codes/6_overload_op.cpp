// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
#include <cstring>
using namespace std;

class String
{

    char *s;
    int len;

public:
    String(const char *s)
    {
        len = strlen(s);
        this->s = new char[len + 1];
        strcpy(this->s, s);
    }
    void put()
    {
        cout << "String value : " << this->s << endl;
    }
    String operator=(String s2)
    {
        strcpy(s, s2.s);
        return *this;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    String x("John"), y("Doe");
    x.put();
    y.put();
    cout << "---------------" << endl;
    x = y;
    x.put();
    y.put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}