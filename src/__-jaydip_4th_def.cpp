// Desc : jaydip 4th defination
// Date : 19 sep 2023

#include <iostream>
using namespace std;

class Person
{

protected:
    string name;
    string gender;
    int age;

public:
    void getData();
    void putData();
};

void Person ::getData()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter gender : ";
    cin >> gender;
    cout << "Enter Age : ";
    cin >> age;
}

void Person ::putData()
{
    cout << "Name : " << name << endl;
    cout << "Gender : " << gender << endl;
    cout << "Age : " << age << endl;
}

class Student :  public Person
{

protected:
    string instName;
    int year;
    Person s;

public:
    void getData();
    void putData();
};

void Student ::getData()
{
    s.getData();
    cout << "Enter Institute  name : ";
    cin >> instName;
    cout << "Enter year : ";
    cin >> year;
}

void Student ::putData()
{
    s.putData();
    cout << "Institute Name : " << instName << endl;
    cout << "Year : " << year << endl;
}

class Employee :  public Person
{

protected:
    string company;
    int salary;
    Person e;

public:
    void getData();
    void putData();
};

void Employee ::getData()
{
    e.getData();
    cout << "Enter company : ";
    cin >> company;
    cout << "Enter salary : ";
    cin >> salary;
}

void Employee ::putData()
{
    e.putData();
    cout << "Company : " << company << endl;
    cout << "salary : " << salary << endl;
}


int main()
{
    cout << "----------------------------------------------------------" << endl;


    Student neon;
    Employee jaydip;
    neon.getData();
    cout<<endl;
    jaydip.getData();
    cout<<endl;
    cout<<"Student neon data display"<<endl;
    neon.putData();
    cout<<endl;
    cout<<"Employee jaydip data display"<<endl;
    jaydip.putData();
    cout<<endl;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}