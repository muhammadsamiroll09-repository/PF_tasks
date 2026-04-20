#include<iostream>
#include<cmath>
using namespace std;
main(){
    float num1,num2,p;
    cout<<"Enter the base  number : ";
    cin>>num1;
    cout<<"Enter the exponent number : ";
    cin>>num2;

    p=pow(num1,num2);
    cout<<num1<<" to raise power "<<num2<<" : "<<p;
}