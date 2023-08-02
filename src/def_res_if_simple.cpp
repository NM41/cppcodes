// Desc : input marks of three sub. writer a prog that print result (pass/ fail/ atkt) using only simple if
// Date : 02 aug 2023

#include <iostream>
using namespace std;

class Student
{
    int sub[3];
    int score = 0;

public:
    void inputMarks();
    void displayResult();
};

void Student ::inputMarks()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter marks of sub "<<i+1<<" : ";
        cin >> sub[i];
    }
}

void Student ::displayResult()
{
    for (int i = 0; i < 3; i++)
        if (sub[i] >= 40)
            score++;
    if (score == 3)
        cout << "Pass";
    if (score == 2)
        cout << "ATKT";
    if (score <= 1)
        cout << "Fail";
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Student Neon;
    Neon.inputMarks();
    Neon.displayResult();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}