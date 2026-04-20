#include <iostream>
using namespace std;

void CAC(char alphabet);

main()
{
    cout << "Enter a character : ";
    char ch;
    cin >> ch;
    CAC(ch);
}

void CAC(char alphabet)
{
    int a = alphabet;
    if (a > 64 && a < 91)
    {
        char ch = a;
        cout << "You have entered a capital letter : ";
        cout << ch;
    }

    else if (a > 96 && a < 123)
    {
        char ch = a;
        cout << "You have entered a small letter : ";
        cout << ch;
    }

    else{
        cout<<"Invalid input .";
    }
}