#include<iostream>
#include<cmath>
using namespace std;
main(){
    float num1,num2,mn;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the secong number : ";
    cin>>num2;

    mn=min(num1,num2);
    cout<<"Minimum number is : "<<mn;
}