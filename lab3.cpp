#include <iostream>
using namespace std;
main(){
    int password;
    int choice,deposit_money,withdraw_money;
    
   

    for(int i=1;i<=3;i++){

        cout<<"Enter the password : ";
        cin>>password;

        if(password==1234){
            cout<<"Login Successfully "<<endl;
            break;
        }

        else{
            cout<<"Wrong password"<<endl;
            
        }

        if( (password!=1234) && (i==3)){
            cout<<"Too many wrong attempts.Card blocked.";
            return 0;

        }
    }

    while(0==0){
        cout<<"---ATM Machine---"<<endl;
        cout<<"1. Check balance"<<endl;
        cout<<"2. Deposit money"<<endl;
        cout<<"3. Withdraw money"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

 if (choice == 1)
            {
                cout << "Current balance : 1000"<<1000<<endl;
        
            }

            else if (choice == 2)
            {
                cout<<"Enter deposit money :";
                cin>>deposit_money;
                cout<<"Money deposited successfully"<<endl;
            }

            else if (choice == 3)
            {
               cout<<"Enter the withdraw amount : ";
               cin>>withdraw_money;
               cout<<"please vollect your cash "<<endl;
            }

            else if (choice == 4)
            {
                cout << "Thank you for using the ATM";
                break;
            }

            else
            {
                cout << "Invalid input .Enter between (1-4)"<<endl;
            }
        
    }
}
