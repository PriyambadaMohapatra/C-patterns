/*
D
C D
B C D
A B C D
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
        char ch='D'-row+1;
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