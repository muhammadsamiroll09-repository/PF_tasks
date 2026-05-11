#include<iostream>
using namespace std;
//    C++ mein 2D array pass karte waqt columns ka size dena zaroori hota hai, rows optional hoti hain.


int color_no_cars(int);
   


main(){
     cout<<"Enter the color index : ";
     int color_index;
     cin>>color_index;

     int sum=color_no_cars(color_index);
     cout<<"sum of "<<color_index<<" is "<<sum;

    }


    int color_no_cars(int a){
     int cardata[5][5] = { //{black,red,brown,blue,grey}
                          {10, 7, 12, 10, 4}, // suzuki
                          {18, 11, 15, 17, 2},  // toyota
                         {23, 19, 12, 16, 14},  // nissan
                          {7, 12, 16, 0, 2},   // bmw
                           {3, 5, 6, 2, 1}};  //  audi

                           int sum=0;
                        for(int i=0;i<=4;i++){
                           sum=sum+cardata[i][a];
                        }

                        return sum;
}