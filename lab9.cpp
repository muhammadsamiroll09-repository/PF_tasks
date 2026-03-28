#include<iostream>
using namespace std;
main(){
     string word;
     int n=0;
     cout<<"Enter the word : ";
     cin>>word; 
     for(int i=0;word[i]!='\0';i++){
        n+=1;
     }
      for(n;n>=0;n--){
        cout<<word[n];
      }
    
    
    
    }