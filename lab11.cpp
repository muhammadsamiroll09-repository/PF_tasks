#include<iostream>
using namespace std;

void symmetrical ( int a);

main(){
    cout<<"Enter the no. : ";
    int a;
    cin >>a;
    symmetrical( a );
}

 void symmetrical ( int a){
          int first=a/100;
          int last=a%10;
          if(first==last){
            cout<<"The no is symmetric ";
          }
          else{
            cout<<"The no is not symmetric";
          }
 }
