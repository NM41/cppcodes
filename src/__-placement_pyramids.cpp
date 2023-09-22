//Desc : placement pyramids
//Date : 16 sep 2023

#include<iostream>
using namespace std;

int ofsum(int a){
    int temp =0;
    while(a>0){
        temp += a;
        a--;        
    }
    return temp;

}

int main(){
    cout<<"----------------------------------------------------------"<<endl;

    int row, column;

    cout<<"Enter value of n :";
    cin>>row;

    int *p = new int[row];

    int a;
    a = ofsum(row);
    p[0] = a;
    int count = row;
    for(int i=1; i<=row; i++){
        // count = i;
        for(int j=1; j<=i; j++){
            if(j%2!=0){cout<<a<<" ";}else{cout<<p[i-1]<<" ";}
        }
        if(i%2!=0)
        {
            int x = count + (count-2);
            p[i-1] = x;
           while(x>0){
            p[i-1] -=1;
            x--;
           }
           
        }
        else {
            p[i-1] -=1;
        };
        cout<<endl;
        count--;
    }


    cout<<"\n----------------------------------------------------------"<<endl;
    return 0;
}