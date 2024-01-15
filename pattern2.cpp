/*pattern
  111
  222
  333 */ //observation row =3 and every row input the no. of the row
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=row){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}