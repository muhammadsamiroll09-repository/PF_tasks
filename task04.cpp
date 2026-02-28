#include<iostream>
using namespace std;
main(){
int charge,time,current;

cout<<"Enter the Charge(Q) in Coulombs : ";
cin>> charge;

cout<<"Enter the Time (t) in second : ";
cin>> time;
 
current=charge/time;
cout<<"The current (I) is "<<current;
 }