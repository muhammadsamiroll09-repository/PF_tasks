#include<iostream>
using namespace std;
main(){
    int number ;
    cout<<"Enter number : ";
    cin>>number;

    int digit,frequency=0;
    cout<<"Enter digit : ";
    cin>>digit;

    for(int i=number;i>0;i=i/10){ // no. = 323
        if(i%10==digit){          // digit = 3
            frequency=frequency+1;
        }
    
    }
 cout<<"Frequency of "<<digit<<" in "<<number<<" : "<<frequency;


}