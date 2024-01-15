/*
1
2 2 
3 3 3 
4 4 4 4
5 5 5 5 5 */ //row:5 column has the row no. printed
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<row<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}