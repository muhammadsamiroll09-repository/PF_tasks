#include<iostream>
using namespace std;
//  Create a function that swaps two variables using pointers.
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
main(){
  int a,b;
  cout<<"Enter the first no : ";
  cin>>a;   
  cout<<"Enter the second no : ";
  cin>>b;
  swap(&a,&b);
  cout<<a<<"\t"<<b;
}