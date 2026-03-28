#include<iostream>
using namespace std;
main(){
    string movie_name,m[5]={"Gladiator","Starwars","Terminator","Teleport","Artificial_Intelligence"};
    float dis_5=500-((5/100.0)*500) , dis_10=500-((10/100.0)*500);
    


    cout<<"Enter movie name : "<<endl<<"";
    cin>>movie_name;

     for(int i=0;i<5;i++){
        if(movie_name==m[i]){
            if(i%2==0){
                cout<<"Discount on movie m["<<i<<"] : "<<dis_5;
                
            }
            else if (i%2!=0){
               cout<<"Discount on movie m["<<i<<"] : "<<dis_10; 
               
            }
            else{
                cout<<"You entered invalid movie name or invalid entry ";
            }
        }
     }










}