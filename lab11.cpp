#include<iostream>
using namespace std;
int const rowsize=100;
int const colsize=3;
// program to print sum of all values of array
int printsum(int a[][colsize],int row){
    int sum=0;
    for(int i=0;i<row;i++){
    for(int j=0;j<colsize;j++){
        sum+=a[i][j];
    }
    return sum;
}

}

main(){

    int a[rowsize][colsize];
    cout<<"Enter the rowsize : ";
    int sizeofrow;
    cin>>sizeofrow;
    
for(int i=0;i<sizeofrow;i++){
    for(int j=0;j<colsize;j++){
        cout<<"Enter element at position ["<<i<<"]["<<j<<"] : ";
        cin>>a[i][j];
    }
}

int s=printsum(a,sizeofrow);
cout<<"Sum : "<<s;
}