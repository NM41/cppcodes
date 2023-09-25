// Desc : read write object
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
using namespace std;

class Stud
{
    int rn;
    char nm[50];

public:
    void get()
    {
        cout << "Enter roll no and name : " << endl;
        cin >> rn >> nm;
    }
    void put()
    {
        cout << rn << "\t" << nm << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    char c;
    Stud s;
    fstream f;
    f.open("N:/NYN/C++Codes/src/file_handling_files/read_write_object.txt", ios::in | ios::out);
    while (1)
    {
        s.get();
        f.write((char *)&s, sizeof(s));
        cout << "Continue..? (y/n) : ";
        cin.get(c);
        c = cin.get();

        if (c != 'y')
            break;
    }
    cout << "Rno \tName " << endl;
    f.seekg(0);
    while (f.read((char *)&s, sizeof(s)))
        s.put();
    f.close();
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}