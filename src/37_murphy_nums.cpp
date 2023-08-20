//Desc : murphy number
//Date : unknown (20 aug) 2023

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"----------------------------------------------------------"<<endl;

    int n,cn, s = 0, c = 0;
    cout << "Enter a num : ";
    cin >> n;
    cn = n;

    while(cn > 0){
        c++;
        cn /= 10;
    }
    s = n*n;
    cn = pow(10,c);
    if((s%cn) == n)
        cout<<n<<" is a murphy number"<<endl;
        else
        cout<<n<<" is not a murphy number"<<endl;

    cout<<"\n----------------------------------------------------------"<<endl;
    return 0;
}