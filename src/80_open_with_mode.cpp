// Desc : open file using open with MODE
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    char c;
    fstream f;
    f.open("N:/NYN/C++Codes/src/file_handling_files/open_modes.txt", ios::in | ios::out);
    cout << "Enter content of the file (cntl + z) to terminate :- " << endl;
    while ((c = getchar()) != EOF)
        f.put(c);
    f.seekg(0);
    cout << endl
         << "Content of the file" << endl;
    while (!f.eof())
    {
        c = f.get();
        cout << c;
    }
    f.close();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}