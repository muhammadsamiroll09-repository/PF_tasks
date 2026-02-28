#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name : ";
string moviename;
cin>>moviename;

cout<<"Enter price of adult ticket : ";
int adultticketpri;
cin>>adultticketpri;

cout<<"Enter price of child ticket : ";
int childticketpri;
cin>>childticketpri;

cout<<"Enter price of adult tickets sold : ";
int adultticketssold;
cin>>adultticketssold;

cout<<"Enter price of child tickets sold : ";
int childticketssold;
cin>>childticketssold;

cout<<"Enter percentage of charity from money of ticket : ";
int charityvalue;
cin>>charityvalue;

int totalmoney=(adultticketpri*adultticketssold)+(childticketpri*childticketssold);

float charitymoney= totalmoney*(charityvalue/100.0);

float remainingamount=totalmoney-charitymoney;

cout<<"-------------------------------------------------";
cout<<"Movie : "<<moviename<<endl;
cout<<"Amount of money from tickets : "<<totalmoney<<endl;
cout<<"Donation to charity : "<<charitymoney<<endl;
cout<<"Remaining amount after charity : "<<remainingamount;

}