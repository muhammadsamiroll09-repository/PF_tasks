#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int number_of_number_lines,number,p1=0,p2=0,p3=0,p4=0,p5=0;
    cout<<"Enter the numbers : ";
    cin>>number_of_number_lines;

    for(int i=1;i<=number_of_number_lines;i++){
        cout<<"Enter the no. :";
        cin>>number;

        if(number>=1 &&number<200){
            p1++;
        }
        else if(number>=200 &&number<400){
            p2++;
        }
        else if(number>=400&&number<600){
            p3++;
        }
         else if(number>=600&&number<800){
            p4++;
        }
         else if(number>=800&&number<=1000){
            p5++;
        }

    }

    cout<<"Percentage of P1 : "<<fixed<<setprecision(2)<<(p1*100.0)/number_of_number_lines<<" %"<<endl;
    cout<<"Percentage of P2 : "<<fixed<<setprecision(2)<<(p2*100.0)/number_of_number_lines<<" %"<<endl;
    cout<<"Percentage of P3 : "<<fixed<<setprecision(2)<<(p3*100.0)/number_of_number_lines<<" %"<<endl;
    cout<<"Percentage of P4 : "<<fixed<<setprecision(2)<<(p4*100.0)/number_of_number_lines<<" %"<<endl;
    cout<<"Percentage of P5 : "<<fixed<<setprecision(2)<<(p5*100.0)/number_of_number_lines<<" %"<<endl;
}
