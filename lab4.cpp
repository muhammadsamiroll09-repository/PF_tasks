#include<iostream>
using namespace std;
main(){
    int number[5];
    int max;
    for(int i=0;i<5;i++){
        cout<<"Enter the no. :";
        cin>>number[i];
    }

    max=number[0];

    for(int j=1;j<=4;j++){
        if(max<number[j]){
            max=number[j];
        }
    }

    cout<<"Greater no. is : "<<max;

}