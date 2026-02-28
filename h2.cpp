#include<iostream>
using namespace std;
main(){

int fps,time,seconds,no_of_frames;

cout<<"Enter the FPS : ";
cin>>fps;

cout<<"Enter the times(in Mins) : ";
cin>>time;
seconds=time*60;

no_of_frames=seconds*fps;

cout<<"The no. of frames : "<<no_of_frames;

}


