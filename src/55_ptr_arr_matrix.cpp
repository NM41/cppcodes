// Desc : constructing 2d array using pointer (matrix)
// Date : 22 sep 2023

#include <iostream>
using namespace std;

class Matrix
{
    int **m, r, c;

public:
    Matrix(int r1, int c1);
    ~Matrix();
    void get();
    void put();
};

Matrix::Matrix(int r1, int c1)
{
    r = r1;
    c = c1;
    m = new int *[r];
    for (int i = 0; i < r; i++)
        m[i] = new int[c];
    cout << "Constructor" << endl;
}

Matrix::~Matrix()
{
    for (int i = 0; i < r; i++)
        delete m[i];
    delete m;
    cout << "Desctructor" << endl;
}

void Matrix ::get()
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << endl
                 << "Enter value : ";
            cin >> m[i][j];
        }
}

void Matrix::put()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int r, c;
    cout << "Enter no of rows and cols : ";
    cin >> r >> c;
    Matrix m(r, c);
    m.get();
    m.put();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}