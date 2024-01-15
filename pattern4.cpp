/*
4 3 2 1 
4 3 2 1
4 3 2 1
4 3 2 1
*///reverse of the previour one
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int i =1;
    while(i<=row){
        int j=row;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
