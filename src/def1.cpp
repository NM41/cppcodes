// write a program demostrate class named with stud which have following member :
//      id
//      name
//      course
//      sem
//      addr
//      mo
//      email
// get dynamic value and print it using class

// Desc : as above
// Date : 24 07 2023

#include <iostream>
using namespace std;

class Stud
{
private:
    int id;
    string name;
    string course;
    int sem;
    string addr;
    string mo;
    string email;

public:
    void set_info();
    void get_info();
};

void Stud::set_info()
{
    cout << "Enter id\t";
    cin >> id;
    cout << "Enter name\t";
    cin >> name;
    cout << "Enter course\t";
    cin >> course;
    cout << "Enter sem\t";
    cin >> sem;
    cout << "Enter addr\t";
    cin >> addr;
    cout << "Enter mo\t";
    cin >> mo;
    cout << "Enter email\t";
    cin >> email;
}

void Stud ::get_info()
{
    cout << endl
         << "Stud Information" << endl
         << "Id \t = " << id << endl
         << "Name\t = " << name << endl
         << "Course\t = " << course << endl
         << "Sem \t = " << sem << endl
         << "Addr\t = " << addr << endl
         << "Mobile\t = " << mo << endl
         << "Email\t = " << email << endl;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Stud s1;
    s1.set_info();
    s1.get_info();

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}