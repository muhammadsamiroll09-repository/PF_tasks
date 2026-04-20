#include <iostream>
#include <cmath>
using namespace std;

float determinant_function(float a, float b, float c)
{
    return ((b * b) - (4 * a * c));
}

void d1(float a, float b, float c)
{
    cout << "Real roots are : " << endl;
    cout << "x = " << -b / (2 * a) - sqrt(b * b - 4 * a * c) /( 2 * a)  << endl;
    cout << "x = " << -b / (2 * a) + sqrt(b * b - 4 * a * c) / (2 * a) ;
}

void d2(float a, float b, float c)
{
    cout << "One real root :";
    cout << "x = " << -b / 2 * a;
}

void d3(float a, float b, float c)
{
    cout << "Complex roots are : " << endl;
    cout << "x = " << -b / 2 * a << " - " << sqrt(-(b * b - 4 * a * c)) / 2 * a << "i" << endl;
    cout << "x = " << -b / 2 * a << " + " << sqrt(-(b * b - 4 * a * c)) / 2 * a << "i";
}

main()
{
    float a, b, c, determinant;

    cout << "Enter the co_efficcient of a : ";
    cin >> a;

    cout << "Enter the co_efficcient of b : ";
    cin >> b;

    cout << "Enter the co_efficcient of c : ";
    cin >> c;

    determinant = determinant_function(a, b, c);

    if (determinant > 0)
    {
        d1(a, b, c);
    }

    else if (determinant == 0)
    {
        d2(a, b, c);
    }

    else
    {
        if (determinant < 0)
        {
            d3(a, b, c);
        }
    }
}