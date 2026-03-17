#include<iostream>
using namespace std;
main(){
    int choice;
    string bookname;

    while(0==0){
    cout<<endl<<"----Library System---"<<endl;
    cout<<"1. Add Book"<<endl;
    cout<<"2. View Book"<<endl;
    cout<<"3. Borrow Book"<<endl;
    cout<<"4. Generate Bill"<<endl;
    cout<<"5. Issue Book"<<endl;
    cout<<"6. Exit "<<endl;
    
    cout<<"Enter your choice(1-6) : ";
    cin>>choice;
    
    if(choice==1){
        cout<<"Enter the book name you want to add : ";
        cin>>bookname;
    
    }
    else if(choice==2){
        cout<<"Books in the library :"<<endl<<"1. Adventure king"<<endl<<"2. Good "<<endl;
    }
    else if(choice==3){
        cout<<"You have borrow a book"<<endl;
    }
    else if(choice==4){
        cout<<"You have been issued a book  "<<endl;
    }
    else if(choice==5){
        cout<<"Your bill generated  "<<endl;
    }
   
    else if(choice==6){
        cout<<"Exiting Library system.Goodbye!";
        break;
    }
     else{
        cout<<"You entered an invalid input"<<endl;
     }


    }
}