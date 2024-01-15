/*
*****
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
int main(){
    //we start with taking the number of rows
    int rows;
    cin>>rows;
    int i=1;
    while(i<=rows){
        //here we will add what we want in the row
        //we will make a new variable for columns
        int j=1;
        while(j<=rows){
            //since it is a square no. of row = no.of columns
            cout<<"*";
            j++;
        }
        cout<<endl;//to change line after every row
        i++;//goes to the next row
    }
    return 0;

}