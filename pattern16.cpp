/*
A
B C
D E F
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<ch<<" ";
            ch++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}