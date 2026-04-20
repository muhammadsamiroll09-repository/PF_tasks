#include<iostream>
using namespace std;

void sum(int num1,int num2); // prototype

main(){
    int n1,n2;
    cout<<"Enter the first number : ";
    cin >>n1;
    cout<<"Enter the second number : ";
    cin >>n2;
    sum(n1,n2);

}

void sum(int num1,int num2){
    cout<<"The sum is : "<<num1+num2;
}