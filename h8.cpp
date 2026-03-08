#include<iostream>
using namespace std;
main(){
    int holidays;
    
    cout<<"Enter the no. of holidays : ";

    cin>>holidays;

    int playing_time= (365-holidays)*63+holidays*127;

    int diff = 30000-playing_time; 

    int hours= diff/60; // 95.443 -->95

    int totalhours=60*hours; //

    int rem_mins=diff-totalhours; // remain min

    if(playing_time<=30000)
    {
       cout<<"Tom sleep well"<<endl;
       cout<<hours<<" hours and "<<rem_mins<<" minutes less for play ";
    }
    else{
        cout<<"Tom does will run away"<<endl;
        cout<<hours<<" hours and "<<rem_mins<<" minutes for play ";
        
    }



    


 }