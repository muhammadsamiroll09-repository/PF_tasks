#include<iostream>
using namespace std;
main(){
    string letter;
    bool value=false;
    char ch;
    cout<<"Enter a word :";
    cin>>letter;
    cout<<"Enter character :";
    cin>>ch;

    for(int i=0;letter[i]!='\0';i++){
        if(ch==letter[i]){
            cout<<"Found";
            break;
        }
        else{
            value=true;
        }
    }

    if(value==true){
        cout<<"Not found ";
    }
  
}