// Desc : open file using constructor
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int rn;
    char nm[50];
    cout << "Enter roll no and name : " << endl;
    cin >> rn >> nm;
    ofstream f1("N:/NYN/C++Codes/src/file_handling_files/oepn_file_using_cons.txt");
    f1 << rn << endl;
    f1 << nm << endl;
    f1.close();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}