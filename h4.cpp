#include<iostream>
using namespace std;
main(){
       cout <<"Enter the no. : ";
       int n,sum=0;

       cin>>n;
       while(n>=0){
       sum=sum+n;
       cout <<"Enter the no. : ";    
       cin>>n;
       }
       cout<<"The sum is : "<<sum;
}