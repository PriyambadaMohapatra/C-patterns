/*
_ _ _ 1
_ _ 2 3
_ 4 5 6 
7 8 9 10
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int column=1;
        while(column<=row){
            cout<<count;
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}