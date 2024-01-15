/*
1 2 3 4
_ 2 3 4 
_ _ 3 4
_ _ _ 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=1;
        while(space<row){
            cout<<" ";
            space++;
        }
        int column=row;
        while(column<=n){
            cout<<column;
            column++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}