#include <iostream>
using namespace std;
main()
{
    int nred, nwhite, tullips;
    float totalprice, discountprice;

    cout << "Enter the no. of red roses purchased :";
    cin >> nred;
    cout << "Enter the no. of white roses purchased :";
    cin >> nwhite;
    cout << "Enter the no. of red  purchased :";
    cin >> tullips;

    totalprice=(nred*2.00)+(nwhite*4.10)+(tullips*2.50);
    discountprice=totalprice-(totalprice*(20/100.0));

    if(totalprice>200){
           cout<<"Original price : "<<totalprice<<endl; 
           cout<<"Price after discount : "<<discountprice;
    }

    if(discountprice<=200){
        cout<<"Original price : "<<totalprice; 
    }
}