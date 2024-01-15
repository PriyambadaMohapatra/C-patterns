/*
A
B C
C D E
D E F G
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
        char first='A'+row-1;
        while(column<=row){
            cout<<first<<" ";
            first++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}