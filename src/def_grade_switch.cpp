// Desc : Input avarage marks of student and print grade using switch statement
// Date : 01 aug 2023

#include <iostream>
using namespace std;

class Student
{
    double avgMarks;
    char grade = 'x';
    void process();

public:
    void getMarks()
    {
        cout << "Enter student's average marks : ";
        cin >> avgMarks;
        process();
    }
    void earnedGrade();
};
void Student ::process()
{
    if (avgMarks <= 100 && avgMarks >= 70)
        grade = 'o';
    else if (avgMarks <= 70 && avgMarks >= 60)
        grade = 'a';
    else if (avgMarks <= 60 && avgMarks >= 50)
        grade = 'b';
    else if (avgMarks <= 50 && avgMarks >= 40)
        grade = 'c';
    else if (avgMarks <= 40 && avgMarks >= 0)
        grade = 'f';
    else
        grade = 'x';
}

void Student ::earnedGrade()
{
    switch (grade)
    {
    case 'o':
        cout << "Distiction class grade" << endl;
        break;
    case 'a':
        cout << "First class grade" << endl;
        break;
    case 'b':
        cout << "Second class grade" << endl;
        break;
    case 'c':
        cout << "Third class grade" << endl;
        break;
    case 'f':
        cout << "You're failed..!" << endl;
        break;

    default:
        cout << "Invalid marks entered..." << endl;
        break;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Student mohit;
    mohit.getMarks();
    mohit.earnedGrade();

    cout << "----------------------------------------------------------" << endl;
    return 0;
}