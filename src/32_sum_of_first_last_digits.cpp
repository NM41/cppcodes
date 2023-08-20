//Desc : sum of first and last digit
//Date : unknown (20 aug) 2023

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"----------------------------------------------------------"<<endl;

    int number, sum = 0, first, last;
    cout<<"Enter a number : ";
    cin >> number;
    number = abs(number);
    last = number % 10;
    while(number != 0){
        first = number % 10;
        number /=10;        
    }
    sum = last + first;
    cout << sum;
    cout<<"\n----------------------------------------------------------"<<endl;
    return 0;
}