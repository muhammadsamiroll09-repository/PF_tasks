#include<iostream>
using namespace std;
main(){
    int n,i,j;

    cout<<"Enter the amount of no.'s u want to enter : ";
    cin>>n;

    int number[n];

    for( i=0;i<n;i++){
        cout<<"Enter no : ";
        cin>>number[i];
    }

    cout<<endl<<"Output Numbers : "<<endl;

    for(i=0;i<n;i++){
        cout<<number[i]<<endl;
    }


}