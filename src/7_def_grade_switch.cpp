// Desc : Input avarage marks of student and print grade using switch statement
// Date : 01 aug 2023

#include <iostream>
using namespace std;

//--------following is valid but not according to the definiton------
//--------as mention in definition, we have to use only switch case--
//--------not if..else....so....-------------------------------------
// class Student
// {
//     double avgMarks;
//     char grade = 'x';
//     void process();

// public:
//     void getMarks()
//     {
//         cout << "Enter student's average marks : ";
//         cin >> avgMarks;
//         process();
//     }
//     void earnedGrade();
// };
// void Student ::process()
// {
//     if (avgMarks <= 100 && avgMarks >= 70)
//         grade = 'o';
//     else if (avgMarks <= 70 && avgMarks >= 60)
//         grade = 'a';
//     else if (avgMarks <= 60 && avgMarks >= 50)
//         grade = 'b';
//     else if (avgMarks <= 50 && avgMarks >= 40)
//         grade = 'c';
//     else if (avgMarks <= 40 && avgMarks >= 0)
//         grade = 'f';
//     else
//         grade = 'x';
// }

// void Student ::earnedGrade()
// {
//     switch (grade)
//     {
//     case 'o':
//         cout << "Distiction class grade" << endl;
//         break;
//     case 'a':
//         cout << "First class grade" << endl;
//         break;
//     case 'b':
//         cout << "Second class grade" << endl;
//         break;
//     case 'c':
//         cout << "Third class grade" << endl;
//         break;
//     case 'f':
//         cout << "You're failed..!" << endl;
//         break;

//     default:
//         cout << "Invalid marks entered..." << endl;
//         break;
//     }
// }

//--------following is valid according to the definition---------
class Stud
{
    double avgMarks;
    int score = 0;

public:
    void getAvg();
    void grade();
};

void Stud::getAvg()
{
label:
    cout << "Enter avg mark : ";
    cin >> avgMarks;
    if (avgMarks > 100 || avgMarks < 0)
    {
        cout << "Enter valid average..!" << endl;
        goto label;
    }
}

void Stud::grade()
{
    score = avgMarks / 10;
    switch (score)
    {
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Disctiction" << endl;
        break;

    case 6:
        cout << "First" << endl;
        break;

    case 5:
        cout << "Second" << endl;
        break;

    case 4:
        cout << "Pass" << endl;
        break;

    default:
        cout << "Fail" << endl;
    }
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    // Student Neon;
    // Neon.getMarks();
    // Neon.earnedGrade();

    Stud Neon;
    Neon.getAvg();
    Neon.grade();

    cout << "----------------------------------------------------------" << endl;
    return 0;
}