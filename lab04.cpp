#include<iostream>
using namespace std;
main(){
     string password;
    
     cout<<"Enter the password : ";
     cin>>password;

     if(password=="password"){
        cout<<"Password is unlocked.";
     }

     else{
        cout<<"Password is wrong.";
     }

}