#include <iostream>
using namespace std;
main()
{
    string n1, n2, n3;
    int a, b, c; // ages

    cout << "Enter the name of first brother :";
    cin >> n1;
    cout << "Enter the age of first brother :";
    cin >> a;

    cout << "Enter the name of second brother :";
    cin >> n2;
    cout << "Enter the age of second brother :";
    cin >> b;

    cout << "Enter the name of third brother :";
    cin >> n3;
    cout << "Enter the age of third  brother :";
    cin >> c;

    if (a < b){
        if (a < c)
        {
            cout << n1 << " is the younger ";
        }
        else
        {
            cout << n3 << " is the younger brother";
        }
    }

    else
    {
        if (b < c){
        if (b < c)
        {
            cout << n2 << " is the younger ";
        }
        else
        {
            cout << n3 << " is the younger ";
        }
        }
 
    }
}