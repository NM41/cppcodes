//Desc : prime using goto
//Date : unknown (20 aug) 2023

#include<iostream>
using namespace std;

int main(){
    cout<<"----------------------------------------------------------"<<endl;

    int n, i=2;
    cout<<"Enter a number : "    ;
    cin >> n;
    label:
    if(i == n || n == 1){
        cout<<"Prime";
        return 0;
    }
    if(n%i == 0){
        cout<<"Not Prime";
        return 0;
    }
    i++;
    goto label;

    cout<<"\n----------------------------------------------------------"<<endl;
    return 0;
}