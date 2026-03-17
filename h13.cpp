#include <iostream>
using namespace std;
main(){
     int number1,n1, number2,n2,hcf;
    int remainder;

    cout << "Enter the first no. : ";
    cin >> number1;
    n1=number1;

    cout << "Enter the second no. : ";
    cin >> number2;
    n2=number2;

    while(remainder!=0){
        if(n1>n2){
            remainder=n1%n2; 
            n1=n2;
            n2=remainder;
            hcf=n1;
        }
        else{
            remainder=n2%n1;
            n2=n1;
            n1=remainder;
            hcf=n2;
        }
    }
        cout<<"H.C.F of "<<number1<<" and "<<number2<<" : "<<hcf<<endl;
        cout<<"L.C.M of "<<number1<<" and "<<number2<<" : "<<number1*number2/(hcf*1.0);


        
    }

    