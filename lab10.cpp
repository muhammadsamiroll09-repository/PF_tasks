#include<iostream>
using namespace std;

float mul(float t){
    t=t*5;
    return t;

}

main(){
    float n,t;
    cout<<"Enter the number : ";
    cin>> n;
    t=mul(n);
    cout<<t;
}