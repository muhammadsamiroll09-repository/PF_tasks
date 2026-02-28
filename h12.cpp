#include<iostream>
using namespace std;
main(){
cout<<"Enter no. of square area's u can paint : ";
int N;
cin>>N;


int w,h;
cout<<"Enter the width : ";
cin>>w;
cout<<"Enter the height : ";
cin>>h;

int area_of_each_wall=w*h;

int walls_that_can_be_painted=N/area_of_each_wall;

cout<<"The walls that can be painted are : "<<walls_that_can_be_painted;

}