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
    void getInfo();
    void result();
};

void Student ::getInfo()
{
    cout << "\nEnter roll no : ";
    cin >> rollNo;
    cout << "Enter name : ";
    cin >> name;
    for(int i = 0 ; i < size; i++){
        cout<<"Enter marks of sub "<<i+1<<" : ";
        cin>>marks[i];
    }
}
void Student :: result() {
    int total = 0;
    cout<<rollNo<<"\t"<<name<<"\t";
    for(int i=0; i<size; i++){
        total += marks[i];
        cout<<marks[i]<<"\t";
    }    
    cout<<total;
    double per = total/3.0;
    cout<<per;
    cout<<endl;
}

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Student stud[5];
    for(int i = 0; i<2;i++)
        stud[i].getInfo();
    cout<<"RollNo \t Name \tsub1 \tsub2 \tsub3 \ttotal \tper"<<endl;
    for(int i = 0; i<2;i++)
        stud[i].result();
    
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}