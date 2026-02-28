#include<iostream>
using namespace std;
main(){

int population,n,popu_3rd_decade;

cout<<"Enter the current population : ";
cin>> population;

cout<<"Enter no. of birth per month : ";
cin>> n;

popu_3rd_decade=(360*n)+population;

cout<<"Population in three decades will be : "<<popu_3rd_decade;

}