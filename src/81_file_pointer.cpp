// Desc : file pointer
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    char c;
    int count = 0;
    ifstream fin;
    fin.open("N:/NYN/C++Codes/src/81_file_pointer.cpp");
    cout << "Content of the file : " << endl;
    while (!fin.eof())
    {
        fin.seekg(count, ios::beg);
        c = fin.get();
        cout << c;
        count += 2;
    }
    fin.close();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}