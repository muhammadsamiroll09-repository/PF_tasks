#include<iostream>
using namespace std;
main(){
cout<<"Enter the weight of the bag : ";
int bagweight;
cin>>bagweight;

cout<<"Enter the price of that bag : $";
float bagprice;
cin>>bagprice;


cout<<"Enter the area of garden : ";
int gardenarea;
cin>>gardenarea;

float priceforeachpound=bagprice/bagweight;

float costofusingthefertilizer=bagprice/gardenarea;

cout<<"The price of the fertilizer for each pound : $"<<priceforeachpound<<endl;

cout<<"The cost of using the fertilizer for each square foot of the garden : $"<<costofusingthefertilizer;


}