#include <iostream>
using namespace std;
main(){
    int money_got,age=18,total_money,rem_money,needed_money,year_until_he_wants_to_live_in_past,even_year_money=0,odd_year_money=0;


    cout<<"Enter the money he got from inheritnace : ";
    cin>>money_got;
    cout<<"Enter the year until he wants to live in past : ";
    cin>>year_until_he_wants_to_live_in_past;

    for(int i=1800;i<=year_until_he_wants_to_live_in_past;i++){
        if(i%2==0){
            even_year_money+=12000;
        }

    }

    for(int i=1801;i<=year_until_he_wants_to_live_in_past;i++){
        age=age+1;
        if(i%2!=0){
            odd_year_money+=(12000+(50*age));
            
        }

    }

    total_money= even_year_money+odd_year_money;
     
    if(total_money<=money_got) {

        rem_money=money_got-total_money;

        cout<<"Yes he will live carefree and will here "<<rem_money<<" dollars left";
    }

    else{
        needed_money=total_money-money_got;
        cout<<"he will need "<<needed_money<<" dollars to survive";
    }
}