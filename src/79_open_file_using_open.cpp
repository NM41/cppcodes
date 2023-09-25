// Desc : open file using open() function
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    char nm[50];
    ofstream fout;
    fout.open("N:/NYN/C++Codes/src/file_handling_files/country.txt");
    fout << "Bharat" << endl
         << "Pakistan" << endl
         << "SriLanka";
    fout.close();

    fout.open("N:/NYN/C++Codes/src/file_handling_files/capital.txt");
    fout << "NewDelhi" << endl
         << "Karanchi" << endl
         << "Colombo";
    fout.close();

    ifstream fin;
    fin.open("N:/NYN/C++Codes/src/file_handling_files/country.txt");
    cout << "Country--" << endl;
    while (!fin.eof())
    {
        fin >> nm;
        cout << nm << endl;
    }
    fin.close();

    fin.open("N:/NYN/C++Codes/src/file_handling_files/capital.txt");
    cout << endl
         << "Capital--" << endl;
    while (!fin.eof())
    {
        fin >> nm;
        cout << nm << endl;
    }
    fin.close();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}