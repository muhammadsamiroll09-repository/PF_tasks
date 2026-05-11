#include<iostream>
#include<conio.h>
using namespace std;
// battleship game entered the coordinate in the form of like A1,B3 etc if that coordinate contains 
// *(ship) BOOM will be displyed on the console and if .(water) will be there then splash will be
// displayed.
string boomsplash(string str[][5], string coordinate){
    string w;
    int i=coordinate[0]-'A'; //=0 ascii value of of 'A' is 65
    int j=coordinate[1]-'0'; //= ascii value of of '0' is 48
    j--;
    

    if(str[i][j]=="*"){
    w="BOOM";
    return w;
    }

    if(str[i][j]=="."){
    w="SPLASH";
    return w;
    }
    
    return "Invalid coordinates";
  
}

main(){
string str[5][5]{  /*press 1,2,3,4,5 with any alphabet*/
  /*A*/  {"*",".",".",".","."},
  /*B*/  {".","*",".",".","."},
  /*C*/  {".",".","*",".","."},
  /*D*/  {".",".",".","*","."},
  /*E*/  {".",".",".",".","*"}
};

while(true){
string coordinates;
cout<<"Enter the coordinates : ";
cin>>coordinates;
string s=boomsplash(str,coordinates);
cout<<s<<endl;

}
}