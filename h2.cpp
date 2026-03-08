#include <iostream>
using namespace std;
main()
{
    int speed;

    cout << "Enter the speed of your car (in km/h) : ";
    cin >> speed;

    if (speed > 0)
    {
        if (speed <= 100)
        {
            cout << "Perfect! You are going good.";
        }
        else
        {
            cout << "Halt...YOU WILL BE CHALLANED!!! ";
        }
    }
}