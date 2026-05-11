#include<iostream>
using namespace std;
main(){
    int a=10;
    cout<<"Pre value of a "<<a<<endl;
    int &b=a;
    b=12;
    cout<<"Modified value of a "<<a<<endl;
    cout<<"===================="<<endl<<
          "===================="<<endl;
    int *ptr= &b;
    b=20;
    cout<<"value of b "<<*ptr;   
}