#include <iostream>
using namespace std;
main(){
    string name;
    float n1,n2;
    float area;
    
    cout<<"Enter the name of the geometrical shape (circle,sqare,triangle,rectangle) : "  ;
    cin>> name;

    if(name=="circle"){
        cout<<"Enter the radius of the circle : ";
        cin>>n1;
        area=22/7.0*n1*n1;
        cout<<"Area of circle : "<<area;
        
    }

    if(name=="rectangle"){
        cout<<"Enter the length of the rectangle : ";
        cin>>n1;
         cout<<"Enter the width of the rectangle : ";
        cin>>n2;

        area=n1*n2;
        cout<<"Area of rectangle : "<<area;
        
    }

    if(name=="triangle"){
         cout<<"Enter the base of the triangle : ";
        cin>>n1;
         cout<<"Enter the height of the triangle : ";
        cin>>n2;

        area=(1/2.0)*n1*n2;
        cout<<"Area of rectangle : "<<area;
        
    }

    if(name=="square"){
         cout<<"Enter the one side of the square : ";
        cin>>n1;
        area=n1*n1;
        cout<<"Area of square : "<<area;
        
    }

}