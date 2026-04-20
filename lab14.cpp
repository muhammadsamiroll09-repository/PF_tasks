#include<iostream>
using namespace std;
void futuretime(int hours,int minutes);

main(){
     int hours,minutes;
     cout<<"Enter hours : ";
     cin>> hours;
     cout<<"Enter minutes : ";
     cin>>minutes;
     futuretime(hours,minutes);
}

void futuretime(int hours, int minutes){
    minutes=minutes+15;
    if(minutes>=60){
         minutes-=60;
         hours++;
    }

    if(hours>=24){
        hours-=24;
    }
    cout<<hours<<" : "<<minutes;
}