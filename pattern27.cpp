/*
    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1 
    1 * * * * * * * * 1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;// let n=5
    cin>>n;
    int row=n;// row=5 mtlb 5,4,3,2,1 row m chalega (reverse)
    while(row>=1){ // loop tb tk chalega jb tk row=1 nhi ho jata
        //triangle1
        int column=1;  // column ka number 1 se start h
        while(column<=row){// ishka mtlb h ki pehele 1 2 3 4 5 print hoga kyunki row =5 h ,phir 1,2,3,4 hoga ans so on
            cout<<column<<" ";//column number print ho rha h
            column++; // taki 1 se 2 ho 2 se 3 ho
        }
        //triangle 2
        int star=(n-row)*2;  // star ka formula bnaya kyunki (5-5)*2=0 mtlb star nhi, (5-4)*2 mtlb 2 star
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        int column2=row;// column2=5
        while(column2>=1){// column-- se 5 4 3 2 1 hoga
            cout<<column2<<" ";//vhi print krwa diya
            column2--;
        }
        cout<<endl;
        row--;
    }
    return 0;
}