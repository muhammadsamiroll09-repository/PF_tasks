// Ali works at a fast-food restaurant for Rs 10,000/ salary per month. Now, he wants to buy a
// laptop for his son. The price of the laptop is 50,000/-. For this purpose, he has asked his
// manager to give him a 50% advance salary for the next 6 months.
// YOU ARE A PROGRAMMER.
// Write a program to tell Ali whether he can buy the laptop with this advanced salary or not. If not,
// your program should also suggest the number of months’ salary that is required for purchasing
// the laptop.

#include <iostream>
using namespace std;
main()
{

    int price = 50000;
    int monthlysalary;

    cout << "Enter your salary :";
    cin >> monthlysalary;

    int advancesalaryadsalaryforsixmonth = monthlysalary * (50 / 100.0) * 6;

    if (advancesalaryadsalaryforsixmonth >= 50000)
    {
        cout << "Yes, he can buy the Laptop.";
    }

    else
    {
        cout << "No, he can't buy the laptop" << endl;

        cout << "Months req to buy the laptop : " << 50000/(monthlysalary * (50 / 100.0))<< endl;
    }
}
