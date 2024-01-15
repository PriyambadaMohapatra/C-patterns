/*
A B C 
D E F
G H I
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while (row<=n)
    {
        int column=1;
        while (column<=n)
        {
            cout<<ch<<" ";
            ch=ch+1;
            column++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}