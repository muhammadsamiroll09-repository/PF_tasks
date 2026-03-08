#include <iostream>
using namespace std;
main(){
    
    float speed;
    cout<<"Enter the speed : ";
    cin>>speed;

    if(speed>0){

    if(speed<=10){
        cout<<"Speed is slow";
    }

    if(speed>10){
        if(speed<=50){
        cout<<"Speed is average";
        }
    }

    if(speed>50){
        if(speed<=150){
        cout<<"Speed is fast";
    }
    }

    if(speed>150){
        if(speed<=1000)
        cout<<"Ultra Fast";
    }

    if(speed>1000){
        cout<<"Speed is extremely fast";
    }

}



}