#include<iostream>
using namespace std;
const int rowsize=3;
const int colsize=3;
// program to find whether an entered matrix is identity matrix or not

bool identitymatrix(int array[][colsize]){

    for(int i=0;i<rowsize ;i++){
        for(int j=0;j<colsize ;j++){

         if(i==j){
            if(array[i][j]!=1) return 0;
         }

          if(i!=j){
            if(array[i][j]!=0) return 0;
         }


        }
    }
    return 1;


}

main(){
    int array[rowsize][colsize];

    for(int i=0;i<rowsize ;i++){
        for(int j=0;j<colsize ;j++){
             cout<<"Element at position ["<<i<<"]"<<"["<<j<<"]"<<" : ";
             cin>>array[i][j];
        }
    }

     for(int i=0;i<rowsize ;i++){
        for(int j=0;j<colsize ;j++){
             cout<<array[i][j]<<"\t";
        }
        
        cout<<endl;
    }

   if( identitymatrix(array)==1){
    cout<<"The matrix is identity matrix";
   }
   else{
    cout<<"The matrix is not identity matrix";
   }
    



}