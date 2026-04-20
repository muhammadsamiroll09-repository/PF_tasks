#include <iostream>
#include <cmath>
using namespace std;


float ang(float angle){
    angle=angle*3.14/180;
    return angle;
 }

float h(float t,float h_distance){
    return(t*h_distance);
 }

main()
{
   float h_distance,angle,height,tan_value;
   cout<<"Enter the horizontal distance from the tree : ";
   cin>>h_distance;

   cout<<"Enter the angle in degree : ";
   cin>>angle;
   angle=ang(angle);
   
   tan_value=tan(angle);

   height = h(tan_value,h_distance);
   cout<<"Height of the tree is : "<< height << " feet.";

}