#include <iostream>
using namespace std;

main()
{
    int num1, num2;
    char oper;

    cout << "Enter the first no. : ";
    cin >> num1;

    cout<<"Enter the operator : ";
    cin >> oper;

    cout << "Enter the second no. : ";
    cin >> num2;

    if(oper=='+'){
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
    }

    if(oper=='-'){
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
    }

    if(oper=='*'){
        int div=num1/(num2*1.0);
        cout<<num1<<"/"<<num2<<"="<<div;
    }

    if(oper=='/'){
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
    }

}