#include<iostream>
using namespace std;
main(){
    bool value1=false,value2=false;
    int n,i;

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter one no. per line : "<<endl;
    int specialarray[n];

    for( i=0;i<n;i++){
        cout<<"Value at index["<<i<<"] : ";
        cin>>specialarray[i]; //0 1 2
    }

    for( i=0;i<n;i++){
        if(i%2==0){ //even index
            if(specialarray[i]%2==0){ //even index and their value comparison
                value1=true;
            }
        }

        if(value1==false){
            cout<<"False"<<endl;
            cout<<"This is not special array.";
            return 0;
        }
    }

    for( i=1;i<n;i=i+2){
            if(i%2!=0){
                if(specialarray[i]%2!=0){
                    value2=true;
                }
            }
        

        if(value2==false){
            cout<<"False"<<endl;
            cout<<"This is not special array.";
            return 0;
        }
    }
    

    if(value1==true&&value2==true){
        cout<<"True"<<endl;
        cout<<"This is special array.";
    }
}
