#include<iostream>
using namespace std;
main(){
    cout<<"Enter the positive integer : ";
    int num;
    cin>> num;

    while(num<=0){
        cout<<"Error "<<num<<" is not a positive integer\n"<<"Please enter a positive integer : ";
        cin>>num;
        
    }

    cout<<"Program End ";


}