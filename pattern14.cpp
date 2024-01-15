/*
A B C 
B C D 
C D E 
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
        char start='A'+row-1;
        while(column<=n){
            cout<<start<<" ";
            start++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}