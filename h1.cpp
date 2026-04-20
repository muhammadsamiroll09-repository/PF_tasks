#include <iostream>
using namespace std;

 //1.) ASCII.
 //2.) function.


  // function : A function is a piece of code that performs a task.A function divides a big
    // program into small managable and readable parts .

    //  syntax :
    //  returntype function_name(parameters){
    //  body
    //  return value;
    //       }

    // function types :
    // two types --> (i.) Built in functions , (ii.) User defined functions

    // a function can be declared before as well as after the main function. It depends 
    // upon the programmer. But when user declares user define function after the main function 
    // it should have to declare the prototype of that function before main function.Prototype is
    // like function declaration without braces (but it ends with semicolon) .

    //when the returntype is void then return statement is NOT USED .instead of it we use cout statement.


int factorial(int x);

main(){
    int a,b;
    cout<<"Enter the no. : ";
    cin>> a;
  
    b=factorial(a);
    cout<<"The Factorial is : " <<b;
    
   
}

int factorial(int x){
       int fac=0;
      for( x;x>=1;x--){
        fac+=x;
      }
      return fac;
}