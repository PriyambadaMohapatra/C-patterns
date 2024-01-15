/*
1 1 1 1 
_ 2 2 2 
_ _ 3 3
_ _ _ 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =n;
    int count=1;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int column=1;
        while(column<=row){
            cout<<count;
            column++;
        }
        count++;
        cout<<endl;
        row--;
    }
    return 0;
}