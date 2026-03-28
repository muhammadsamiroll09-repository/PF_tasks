#include<iostream>
#include<iomanip>
using namespace std;
main(){
    float due,sum=0;
    int c=4;
    cout<<"Enter the due : ";
    cin>>due;
    cout<<"Enter amount of exchange( values of coin) in your pocke, one per line : "<<endl;
    int value[c];
    for(int i=0;i<4;i++){
        if(i==0){
            cout<<"Quaters : ";
            cin>>value[i];
            sum+=(0.25*value[i]);
        }

        if(i==1){
            cout<<"Dines : ";
            cin>>value[i];
            sum+=(0.10*value[i]);
        }

        if(i==2){
            cout<<"Nicles : ";
            cin>>value[i];
            sum+=(0.05*value[i]);
        }

        if(i==3){
            cout<<"Pennies : ";
            cin>>value[i];
            sum+=(0.01*value[i]);
        }
    }
    
    cout<<"Can you pay the amount ? ";
   if(sum>=due)
     cout<<"Yes";
      else
      cout<<"No";
    }