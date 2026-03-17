#include <iostream>
using namespace std;
main()
{
    cout << "Enter the no. of rows : ";
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++){
    
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
     for (int i = 1; i <= rows; i++){
    
        for (int n = rows - 1; n >= i; n--)
    {
        cout << "*";
    }
    cout << endl;
}
}
