#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"Enter the name : ";
    cin>>name;

    while(name!="END"){
        cout<<"HELLO "<<name<<endl;
        cout<<"Enter the name : ";
        cin>>name;
        
    }

    if(name=="END"){
        cout<<"END";
    }
}