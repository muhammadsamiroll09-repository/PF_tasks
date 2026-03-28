// Create a program that takes a string and returns a new string with all vowels removed.
// Test Cases:
// Input:
// "I have never seen a thin person drinking Diet Coke." 
// Output:
// " hv nvr sn  thn prsn drnkng Dt Ck."

#include<iostream>
using namespace std;
main(){
    string text;
    cout<<"Enter the text : "<<endl;
    getline(cin,text);
    for(int i=0;text[i]!='\0';i++){
        if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'){
            continue;
        }
        cout<<text[i];
    }

} 