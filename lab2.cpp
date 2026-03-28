#include<iostream>
using namespace std;
main(){
    int i,number[5];

    for(i=0;i<5;i++){
        cout<<"Enter number : ";
        cin>>number[i];
    }

    cout<<"The first number : "<<number[0];
    cout<<"\nThe last number : "<<number[4];
}