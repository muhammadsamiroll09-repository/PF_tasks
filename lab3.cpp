#include<iostream>
#include<cmath>
using namespace std;
main(){
    int num1,num2,mx;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the secong number : ";
    cin>>num2;

    mx=max(num1,num2);
    cout<<"Greater number is : "<<mx;
}