#include<iostream>
using namespace std;
main(){
string name;
int matric,inter,ecat;
float matricmerit,intermerit,ecatmerit,agg;

cout<<"Enter your name : ";
cin>>name;

cout<<"Enter matric marks (out of 1100) : ";
cin>>matric;
matricmerit=0.10*(matric/1100.0);


cout<<"Enter part-1 marks (out of 550) : ";
cin>>inter;
intermerit=0.40*(inter/550.0);

cout<<"Enter ecat marsks (out of 400):";
cin>>ecat;
ecatmerit=0.50*(ecat/400.0);

agg=matricmerit+intermerit+ecatmerit;

cout<<"Aggregate is : "<<agg*100<<"%";




 }