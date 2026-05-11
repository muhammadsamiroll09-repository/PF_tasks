#include<iostream>
using namespace std;
//    C++ mein 2D array pass karte waqt columns ka size dena zaroori hota hai, rows optional hoti hain.
int largest(int a[][5]){
   int  min=a[0][0];
   for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
        if(a[i][j]<min){
            min=a[i][j];
        }
    }
   }
   
return min;
     
}

main(){
    int cardata[5][5] = { //{black,red,brown,blue,grey}
                          {10, 7, 12, 10, 4}, // suzuki
                          {16, 11, 15, 17, 2},  // toyota
                         {23, 19, 12, 16, 14},  // nissan
                          {7, 12, 16, 0, 2},   // bmw
                           {3, 5, 6, 2, 1}};  //  audi
     int smallest_number=largest(cardata);
     cout<<"The smallest number is "<<smallest_number;

    }