#include<iostream>
using namespace std;
main(){
    float totalsum=0;
    int n;
    cout<<"Enter the no. of resisters : ";
    cin>>n;
    float resisters[n];
    for(int i=0;i<n;i++){
        cin>>resisters[n];
        totalsum=totalsum+resisters[n];
    }
    cout<<"The resistance of the series circuit : "<<totalsum;
}