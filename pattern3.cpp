/* 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/// Observation 1. row=4 2. printing column number
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=row){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}