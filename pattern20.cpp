/*
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=n;
    while(row>=1){
        int column=1;
        while(column<=row)
        {
            cout<<"*"<<" ";
            column++;
        }
        cout<<endl;
        row--;
    }
    return 0;
}