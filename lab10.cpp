#include<iostream>
 using namespace std;
// Write a C++ program to change every letter in a given string with the letter following it 
// in the alphabet (ie. a becomes b, p becomes q, z becomes a).
// For Example:
// Input: aslam
// Output: btmbn

// char ch='a';
//     ch=ch+1;
//     cout<<ch;
main(){
    string word;
    char s;
    cout<<"Enter the word  : ";
    cin>>word;
    
    for(int i=0;word[i]!='\0';i++){
        s=word[i]+1;
        cout<<s;
    }
}