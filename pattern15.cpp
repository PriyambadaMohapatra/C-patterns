/*
A
B B
C C C
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        char ch='A'+row-1;
        while(column<=row){
            cout<<ch<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}