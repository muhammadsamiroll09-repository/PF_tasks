#include<iostream>
using namespace std;
const int colsize=5;
// program to find coilumn whose sum is greater than the sum of all columns
void largestcol(int arr[][colsize],int rows){
      int sum[colsize]={0};


      for(int i = 0; i < colsize; i++){
      for(int j = 0; j < rows; j++){

      sum[i]+=arr[j][i];
      }
      }

      int max=sum[0];
      for(int i=1;i<colsize;i++){
        for(int j = 0; j < rows; j++){
        if(sum[i]>max){
            max=sum[i];
            int temp = arr[j][0];
            arr[j][0] = arr[j][i];
            arr[j][i] = temp;
        }
        }// end of if
      }
     
}

main(){
      int arr[100][colsize];
      cout<<"Enter the no of rows : ";
      int rows;
      cin>>rows;

      for(int i = 0; i < rows; i++){
      for(int j = 0; j < colsize; j++){
      cout << "Enter element at [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
      }
      }

      cout<<"The matrix is : "<<endl;

      for(int i = 0; i < rows; i++){
      for(int j = 0; j < colsize; j++){
      cout<<arr[i][j]<<"\t";
      }
      cout<<endl;
    }

      largestcol(arr,rows);


      cout<<"Updated matrix : "<<endl;
       for(int i = 0; i < rows; i++){
      for(int j = 0; j < colsize; j++){
      cout<<arr[i][j]<<"\t";
      }
      cout<<endl;
      }




}