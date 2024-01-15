/*
A A A 
B B B 
C C C 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int column=1;
        while(column<=n){
            char ch='A'+ row -1; // A+1-1=A,A+2-1=A+1=B
            cout<<ch<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}