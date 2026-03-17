#include<iostream>
using namespace std;
main(){
     cout<<"Enter the no. of term terms you want of Fibonacci seq : ";
     int number;
     cin>>number;

     int n1=0,n2=1,nextnum;
     cout<<n1<<","<<n2;

     for (int x=1;x<=number-2;x=x+1){
        nextnum=n1+n2;
        cout<<","<<nextnum;
        n1=n2;
        n2=nextnum;
        
     }


}