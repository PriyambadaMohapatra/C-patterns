/*
_ _ _ 1
_ _ 2 2
_ 3 3 3 
4 4 4 4 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int column=1;
        while(column<=row){
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}