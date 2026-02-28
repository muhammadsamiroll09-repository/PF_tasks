#include<iostream>
using namespace std;
main(){
cout<<"Enter the person's age : ";

int age;
cin>>age;

cout<<"Enter the NO. of times house changed : ";
int N;
cin>>N;

int den=N+1;
 
cout<<"Average no of years spend in each house : "<<age/den;

}