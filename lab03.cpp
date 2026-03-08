#include<iostream>
using namespace std;
main(){
     string one_word;
     string two_word;

     cout<<"Enter the first word : ";
     cin>>one_word;

      cout<<"Enter the second word : ";
     cin>>two_word;

     if(one_word==two_word){
        cout<<"Yes, the words are same.";
     }

     else{
        cout<<"No, the words are different.";
     }

}