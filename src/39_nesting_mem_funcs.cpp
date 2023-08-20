//Desc : nesting of member function & private member function
//Date : unknown (20 aug) 2023

#include<iostream>
using namespace std;

class A {
    int a;
    void get();
    public:
    void put(){
        get();
        cout<<"\na : "<<a;
    }
};

void A :: get() {
    cout<<"Enter a : ";
    cin>>a;
}

int main(){
    cout<<"----------------------------------------------------------"<<endl;    
    A a1;
    // a1.get();
    a1.put();
    cout<<"\n----------------------------------------------------------"<<endl;
    return 0;
}