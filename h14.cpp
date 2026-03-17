#include <iostream>
using namespace std;
main()
{
    int age, machine_price, each_toy_price, money_from_toys,money_saved, money_from_even = 0, toy_count = 0, rem_money, need_money;

    cout << "Enter lily's age (1-77) :"; 
    cin >> age;
    cout << "Enter the price of the machine (1-10,000): ";
    cin >> machine_price;
    cout << "Enter the price of each toy :";
    cin >> each_toy_price;

    for(int i=1;i<=age;i++){
        if((i%2!=0)){
            toy_count=toy_count+1;
        }

    }

    money_from_toys=(each_toy_price*toy_count); 

    for(int i=1;i<=age;i++){
        if(i%2==0){
            money_from_even=money_from_even+((10*(i-(i/2)))-1); // -1 :brother 1 cutten
        }  
    }

    money_saved=money_from_even+money_from_toys;

   if(money_saved>=machine_price){
    rem_money=money_saved-machine_price;
    cout<<"YES! {"<<rem_money<<"}";
   }

else{
    need_money=machine_price-money_saved;
    cout<<"NO! {"<<need_money<<"}";

}


    

    
}