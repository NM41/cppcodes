// Desc : enter 5 student and 3 sub marks for each
// Date : unknown (20 aug) 2023

#include <iostream>
using namespace std;

const int size = 3;

class Student
{
    int rollNo;
    string name;
    int marks[size];

public:
    int total = 0;
    void getInfo();
    void result();
};

void Student ::getInfo()
{
    cout << "\nEnter roll no : ";
    cin >> rollNo;
    cout << "Enter name : ";
    cin >> name;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter marks of sub " << i + 1 << " : ";
        cin >> marks[i];
    }
}
void Student ::result()
{
    cout << rollNo << "\t" << name << "\t";
    for (int i = 0; i < size; i++)
    {
        total += marks[i];
        cout << marks[i] << "\t";
    }
    double per = total / 3.0;
    cout << total << "\t" << per;
    cout << endl;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    const int n = 5;
    Student stud[n];

    for (int i = 0; i < n; i++)
        stud[i].getInfo();

    cout << "RollNo \t Name \tsub1 \tsub2 \tsub3 \ttotal \tper" << endl;
    for (int i = 0; i < n; i++)
        stud[i].result();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}