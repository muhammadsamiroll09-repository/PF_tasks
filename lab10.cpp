#include <iostream>
using namespace std;
const int cols = 5;

int carT(int carT[][cols], int row){
    int sum=0;
    
    for(int i=0;i<cols;i++){
       sum+=carT[2][i];
    }
     
    return sum;
}

    main()
{
    int cardata[5][5] = {                      //{black,red,brown,blue,grey}
                         {10, 7, 12, 10, 4},   // suzuki
                         {16, 11, 15, 17, 2},  // toyota blue at 17 at 1,3
                         {23, 19, 12, 16, 14}, // nissan
                         {7, 12, 16, 0, 2},    // bmw
                         {3, 5, 6, 2, 1}};     //  audi

    int c=carT(cardata,5);
    cout<<"Total Nissan cars : "<<c;
}