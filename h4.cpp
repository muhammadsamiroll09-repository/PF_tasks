#include<iostream>
using namespace std;
main(){
int playercount;
float impostercount,chances;


cout<<"Enter the imposter count (value.0)";
cin>>impostercount;

cout<<"Enter the player count";
cin>>playercount;

chances=100*(impostercount/playercount);

cout<<"Chances of being an imposter : "<<chances<<" %";







}