#include<iostream>
using namespace std;
int main()
{
   float first_array[2];
   int n;
   cout<<"Enter two elements  for first array , one per line : "<<endl;
   for(int i=0;i<2;i++){
    cin>>first_array[i];
   }

   cout<<"Enter no of elements for second array : ";
   cin>>n;

   int second_array[n];

   for(int i=0;i<n;i++){
    cin>>second_array[i];
   }

   cout<<"["<<first_array[0]<<",";
   for(int i=0 ; i<n ; i++){
    cout<<second_array[i]<<",";
   }

   cout<<first_array[1]<<"]";

}
