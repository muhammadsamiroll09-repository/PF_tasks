#include<iostream>
using namespace std;
main(){
int current,voltage,power;

cout<<"Enter current (in amperes) : ";
cin>>current;

cout<<"Enter voltage (in volts) : ";
cin>>voltage;

power=current*voltage;

cout<<"Enter power (in watts) : "<<power<<" watts";


}