#include<iostream> 
using namespace std;

int main()
{
    char ch;
    cout<<"Are the friends going to university ? (y for\"yes\" and n for \"no\") " ;
    cin>>ch;

    if(ch=='y'){
    cout<<"You can go to university";
    }

    if(ch=='n'){
         cout<<"You cannot go to university";
    }

}