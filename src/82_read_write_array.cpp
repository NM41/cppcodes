// Desc : read write array
// Date : 26 sep 2023

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter value : ";
        cin >> a[i];
    }
    ofstream fout("N:/NYN/C++Codes/src/file_handling_files/read_write_array.txt");
    fout.write((char *)&a, sizeof(a));
    fout.close();

    for (i = 0; i < 5; i++)
        a[i] = 0;
    ifstream fin("N:/NYN/C++Codes/src/file_handling_files/read_write_array.txt");
    fin.read((char *)&a, sizeof(a));
    fin.close();
    cout << "Content of the file : " << endl;
    for (i = 0; i < 5; i++)
        cout << a[i] << endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}