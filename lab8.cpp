#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter the word : ";
    cin>>word;
    for(int i=0;word[i]!='\0';i++){
        cout<<word[i]<<" found at positon "<<i;
        cout<<endl;
    }
}