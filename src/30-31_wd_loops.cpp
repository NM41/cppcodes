// Desc : while do while loop
// Date : unknown (20 aug) 2023
#include <iostream>
using namespace std;

void whileLoop(int n, int s, int r){
    cout << "Enter a number : ";
    cin >> n;
    while (n > 0){
        r = n % 10;
        s = s + r;
        n /= 10;
    }
    cout << "\nSum is " << s<<endl;
}
void doWhileLoop(int n, int s){    
    do{
        cout << "Enter a number : ";
        cin >> n;
        s += n;
    } while (n != 0);
    cout << "\nSum : " << s;
}
int main()
{
    cout << "----------------------------------------------------------" << endl;
    int n, s=0, r;
    cout << "While loop : \n"; whileLoop(n,s,r);
    cout << "Do..while : \n"; doWhileLoop(n,s);
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}