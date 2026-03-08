#include<iostream> 
using namespace std;

int main()
{
 cout<<"Enter the bill of medicines :";

 int bill;
 cin>>bill;

 if(bill<=5000){
  int dis_a=bill*0.05;
  int afterdisc_a = bill-dis_a;
  cout<<"the discount on "<<bill <<" is "<<afterdisc_a;
 }

 if(bill>5000){
  int dis_b=bill*0.10;
  int afterdisc_b = bill-dis_b;
  cout<<"the discount on "<<bill <<" is "<<afterdisc_b;
 }

}