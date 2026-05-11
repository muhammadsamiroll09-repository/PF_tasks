#include <iostream>
using namespace std;
const int cols = 5;


void carT(int carT[][cols], int rows,char ch)
{
    if(ch=='A'||ch=='a'){
    // A
    int T = carT[1][3];
    cout<<"A. Blue Toyota cars "<<T;
    }

    int sum=0;
    if(ch=='B'||ch=='b'){
   // B
    
    for(int i=0;i<cols;i++){
       sum+=carT[i][1];
    }
    cout<<"B. Total red cars "<<sum;
    }


    if(ch=='C'||ch=='c'){
    // C
    sum=0;
    for(int i=0;i<rows;i++)
    {
        sum+=carT[2][i];
    }
    cout<<"C. Total Nissan cars "<<sum;
    }


     if(ch=='D'||ch=='d'){
    //D
    cout<<"Enter the color index ";
    int color_no;
    cin>>color_no;
    for(int i=0;i<rows;i++){
       sum+=carT[i][color_no];
    }
    cout<<"D. Total cars "<<sum;
     }


     if(ch=='E'||ch=='e'){
    //E
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            
            cout<<carT[j][i]<<" ";
        }
        cout<<endl;
    
    }
}
    

    
}

main()
{
   

     int cardata[5][5] = { //{black,red,brown,blue,grey}
                         {10, 7, 12, 10, 4},   // suzuki
                         {16, 11, 15, 17, 2},  // toyota blue at 17 at 1,3
                         {23, 19, 12, 16, 14}, // nissan
                         {7, 12, 16, 0, 2},    // bmw
                         {3, 5, 6, 2, 1}};     //  audi
    
    cout<<"Select any option from A to E "<<endl;
    cout<<"A.  Print only the Toyota Blue cars available in the company "<<endl;
    cout<<"B.  Print total red cars available in the company "<<endl;
    cout<<"C.  Print total Nissan available in the company "<<endl;
    cout<<"D.  Print total number of cars of any color "<<endl;
    cout<<"E.  Print Transpose of the car's stock in matrix  "<<endl;
    cout<<"Choose option : ";
    char a;              
       cin>>a;   
   carT(cardata, 5,a);
}