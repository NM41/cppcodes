// Desc : while loop
// Date : unknown (20 aug) 2023

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------" << endl;
    int n, s = 0, r;
    cout << "Enter a number : ";
    cin>>n;
    while(n>0){
        r = n%10;
        s = s + r;
        n/=10;        
    }
    cout<<"\nSum is "<<s;

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}