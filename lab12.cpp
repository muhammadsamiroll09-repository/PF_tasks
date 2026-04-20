#include <iostream>
using namespace std;

void odd_even(int a);

main()
{
    cout << "Enter the no. : ";
    int n;
    cin >> n;
    odd_even(n);
}

void odd_even(int a)
{
    int first_digit = a / 10000;
    int second_digit = (a / 1000) % 10;
    int third_digit = (a / 100) % 10;
    int fourth_digit = (a / 10) % 10;
    int fifth_digit = (a % 10);
    int sum = first_digit + second_digit + third_digit + fourth_digit + fifth_digit;

    if(sum%2==0){
        cout<<"Evenish";

    }
    else{
        cout<<"Oddish";
    }
}