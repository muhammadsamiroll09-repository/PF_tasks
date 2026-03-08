#include<iostream> 
using namespace std;

int main()
{
    cout<<"Enter your Name (in lower case):";
    string name;
    cin>> name;

    if(name=="ali"){
        cout<<"Congratulate "<<name;
    }

    if(name!="ali"){
      cout<<"Try again ";
    }

}