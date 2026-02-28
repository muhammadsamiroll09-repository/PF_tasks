#include<iostream>
using namespace std;
main(){
cout<<"Enter the four digit no. : ";
int fourdigits_no;
cin>>fourdigits_no;

int forthvalue=fourdigits_no%10;
int threedigits_no=fourdigits_no/10;

int thirdvalue=threedigits_no%10;
int twogigits_no=threedigits_no/10;

int seondvalue=twogigits_no%10;

int firstvalue=twogigits_no/10;

cout<<"Sum of the four digits in four digits value is : "<<forthvalue+thirdvalue+seondvalue+firstvalue;




}