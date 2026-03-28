#include <iostream>
using namespace std;
// Write a program that takes n numbers from the user, stores them in an array, and passes
// them to a function that prints them in reverse order.
main()
{
    int no;
    int n = 0;

    cout << "Enter the amount of no. u want to store in array : ";
    cin >> no;

    if (no > 0)
    {
        
        int number_in_array[no];
        for (int i = 0; i < no; i++)
        {
            cout << "Enter " << i << " index no. : ";
            cin >> number_in_array[i];
        }

        for (int i = no - 1; i >= 0; i--)
        {
            n += 1;
        }
        n = n - 1;

        for (n; n >= 0; n--)
        {
            cout << number_in_array[n];
        }
    }
    else
    {
        cout << "Please enter +ve no .You enterd a -ve \"" << no << "\" number.";
        return 0;
    }
}