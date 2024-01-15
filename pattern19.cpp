/*
_ _ _ *
_ _ * *
_ * * *
* * * *
*/// we will take it as a square matrix where space is n-i i.e 4-1=3,4-2=2,4-3=1 and stars=row number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //here we will have 2 while loops 1 for space the other for stars
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int column=1;
        while(column<=row){
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}