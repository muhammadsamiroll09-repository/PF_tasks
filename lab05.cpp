#include<iostream>
using namespace std;
// Implement a program that uses a pointer to reverse a dynamically allocated array.
main(){
    int n;
    cout<<"Enter amount of numbers you want to enter : ";
    cin>>n;
    int array[n];
   
  
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>*(array+i); // addess arry is deref by *
    }

    int  *start=array;
    int *end=array+n-1;

    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;// increment in address
        end--;  // decrement in address
    }
  
    for(int i=0;i<n;i++){
        cout<<"Number "<<i+1<<" : "<<*(array+i)<<endl;
    }
   

}