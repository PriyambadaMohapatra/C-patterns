/*
1
2 1 
3 2 1 
4 3 2 1
*/ // row 4 start row number se ho rha -1 ho rha
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=row;
        while(column>=1){
            cout<<column<<" ";
            column--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}