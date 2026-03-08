#include<iostream>
using namespace std;
main(){
    string country_name;
    int price;

    cout<<"Enter the name of your country : ";
    cin>>country_name;

    cout<<"Enter the ticket price your country : ";
    cin>>price;


    

    if(country_name=="Ireland"){
        price=price-(price*(10/100.0));
        cout<<"Dicounted Price is : "<<price;
    }

    else{
         price=price-(price*(5/100.0));
        cout<<"Dicounted Price is : "<<price;

    }
}