#include<iostream>
using namespace std;
main(){
    int factorial=1,num;
    cout<<"Enter the no. whose factorial you want : ";
    cin>>num;
     for(num;num>0;num--){
        factorial*=num;
     }
    cout<<"The factorial"<<" is : "<<factorial;
}