/*
1
2 3 
3 4 5 
4 5 6 7
*///first element is row no.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        int count=row;
        while(column<=row){
            cout<<count<<" ";
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}