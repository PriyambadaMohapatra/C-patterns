/*
1
2 3
4 5 6
7 8 9 10
*/// row 4 sequential data
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<count<<" ";
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}