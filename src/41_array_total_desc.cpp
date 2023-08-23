// Desc : demo
// Date : DD MMM n0n3

#include <iostream>
using namespace std;

const int size = 3;

class Student
{
    int rollNo;
    string name;
    double per;
    int marks[size];
    void process();

public:
    int total;
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
    process();
}

void Student ::process()
{
    int tot = 0;
    for (int i = 0; i < size; i++)
    {
        tot += marks[i];
    }
    per = tot / 3.0;
    total = tot;
}

void Student::result()
{
    cout << rollNo << "\t" << name << "\t";
    for (int i = 0; i < 3; i++)
    {
        cout << marks[i] << "\t";
    }

    cout << total << "\t" << per;
    cout << endl;
}
int main()
{
    cout << "----------------------------------------------------------" << endl;

    const int n = 5;
    Student stud[n];
    for (int i = 0; i < n; i++)
    {
        stud[i].getInfo();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (stud[j].total > stud[i].total)
            {
                swap(stud[j], stud[i]);
            }
        }
    }
    cout << "----------------------------------------------------------" << endl;
    cout << "RollNo \t Name \tsub1 \tsubn \tsub3 \ttotal \tper" << endl;
    cout << "----------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        stud[i].result();
    }

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}