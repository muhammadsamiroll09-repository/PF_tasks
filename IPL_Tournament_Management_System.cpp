#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

main()
{
    int Player_index = 500;

    int Points_index=0;

    int Reuse_variable=0; // it holds the the value of [No_of_teams] variable ( which is entered by user ) and the Reuse_variable is used in the

    // Data structure is array here

    string Team_name_array[10];  // there are 10 teams              //    These two are much related 
    int Team_points_array[10];  // as there are 10 teams.          //     by parallel array concept and the -->Points_index<-- is controlling them

    string Player_team_array[Player_index];   
    string Player_name_array[Player_index];
    string Player_role_array[Player_index];
    int Player_wickets_array[Player_index];
    int Player_matches_array[Player_index];
    int Player_runs_array[Player_index];

    int History_index = 0; // for storing deleted record .It is used below
    string History_player_team_array[Player_index];
    string History_player_name_array[Player_index];
    string History_player_role_array[Player_index];
    int History_player_runs_array[Player_index];
    int History_player_wickets_array[Player_index];
    int History_player_matches_array[Player_index];

    while (true)
    {
        system("cls"); //     M A I N  M E N U
        cout << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "----------  INDIAN PREMIER LEAGUE - PLAYER MANAGEMENT SYSTEM ----------" << endl;
        cout << "-----------------------------------------------------------------------" << endl
             << endl;
        cout << "Main Menu : " << endl;
        cout << "1. Login as IPL Manangement " << endl;
        cout << "2. Login as User (Fan) " << endl;
        cout << "3. Logout from system " << endl;
        cout << "Choose option  : ";
        string Option;
        cin >> Option;

        if (Option == "1") //   O  P  T   I   O  N   1
        {
            system("cls");
            string Management_username;
            float Passsword;
            bool Value = true;
            bool Password_incorrect=false;

            while (true)
            {

                for (int i = 0; i < 3; i++)
                {
                    system("cls");
                    cout << "Enter your credentials.---- Attempt : " << i + 1 << endl;
                    cout << "Enter the user name : ";
                    cin.ignore();
                    getline(cin, Management_username);
                    cout << "Enter the password : ";
                    string Password;
                    cin >> Password;

                    if (Password == "1234" && Management_username == "Jay Shah")
                    {
                        break;
                    }

                    else if (!(Management_username == "Jay Shah" && Password == "1234") && i == 2)
                    {
                        cout << "Too many wrong attempts. "<<endl;        
                        Value = false;
                      
                    }

                    else
                    {
                        cout << "Wrong credentials .Please enter correct password and user name" << endl;
                        cout << "Press something to continue...";
                        getch();
                    }

                } // for loop end
            

                if (Value == false)
                {   

                    break; //  when credential are false then from here next code executed
                   Password_incorrect=true;

                } // to go out of the option 1 while loop

             


                if (Value == true)
                {

                    while (true)
                    { // management menu while loop
                        system("cls");
                        cout << "1. Add team  " << endl;
                        cout << "2. Add Player to any team  " << endl;
                        cout << "3. View the team players  " << endl;
                        cout << "4. Enter team points  " << endl;
                        cout << "5. Update player record  " << endl;
                        cout << "6. Delete Player  " << endl;
                        cout << "7. History of Players  " << endl;
                        cout << "8. Points table  " << endl;
                        cout << "9. Search player by name " << endl;
                        cout << "10. Logout" << endl;

                        cout << "Choose option : ";
                        string Management_option;
                        cin >> Management_option;

                        if (Management_option == "1")
                        { // option 1 of management menu
                            // add team
                            system("cls");
                            cout << "Enter the number of teams you want to add : ";
                            int No_of_teams;
                            cin >> No_of_teams;
                            Reuse_variable=No_of_teams;
                            cin.ignore();

                            for (int i = 0; i < No_of_teams; i++)
                            {
                                cout << "Enter team " << i + 1 << " name : ";
                                getline(cin, Team_name_array[i]);
                            }

                            cout << "Press something to continue...";
                            getch();

                        } //   option 1 of management menu end

                        else if (Management_option == "2")
                        { // option 2 of management menu
                            // add player to each team
                            system("cls");
                            string Team_name_for_entry;
                            cin.ignore();
                            cout << "Enter the team name : ";
                            getline(cin, Team_name_for_entry);

                            bool value2 = true;

                            if (Team_name_for_entry == Team_name_array[0])
                            { // player data input if for team 1

                                for (int j = 0; j <=10 ; j++)
                                { // for loop     -------------------------------->> convert 1 to 10 at end

                                    system("cls");
                                    cout << "Player " << j + 1 << " data :" << endl;
                                    cout << "Enter player name : ";
                                    string Player_name;
                                    cin >> Player_name;
                                    Player_name_array[j] = Player_name;

                                    cout << "Enter player matches : ";
                                    cin >> Player_matches_array[j];

                                    cout << "Enter player role : ";
                                    cin >> Player_role_array[j];

                                    cout << "Enter player runs : ";
                                    cin >> Player_runs_array[j];

                                    cout << "Enter player wickets : ";
                                    cin >> Player_wickets_array[j];

                                    Player_team_array[j] = Team_name_for_entry; // for team names storage
                                }
                                cout << "Player added successfully " << endl;
                                value2 = false;

                            } // player data input if

                            else if (Team_name_for_entry == Team_name_array[1])
                            { // player data input if for team 2

                                int i = 0;
                                for (int j = 11; j <= 21; j++)
                                { // for loop     ------------------------------------>> convert 12 to 21 at end

                                    system("cls");
                                    cout << "Player " << i + 1 << " data :" << endl;
                                    cout << "Enter player name : ";
                                    string Player_name;
                                    cin >> Player_name;
                                    Player_name_array[j] = Player_name;

                                    cout << "Enetr player matches : ";
                                    cin >> Player_matches_array[j];

                                    cout << "Enter player role : ";
                                    cin >> Player_role_array[j];

                                    cout << "Enter player runs : ";
                                    cin >> Player_runs_array[j];

                                    cout << "Enter player wickets : ";
                                    cin >> Player_wickets_array[j];

                                    Player_team_array[j] = Team_name_for_entry;

                                    i++; // to increase value of i in counter
                                }
                                cout << "Player added successfully " << endl;
                                value2 = false;

                            } // player data input for loop

                            else
                            {
                                cout << "Team does not exist. " << endl;
                                value2 = false;
                            }

                            // ############# if code  here for team   3  333333333333333333
                            if (value2 == false)
                            {

                                cout << "Press something to continue...";
                                getch();
                            }

                        } //  option 2 of management menu end

                        else if (Management_option == "3")
                        {
                            // view team players
                            string Team_name_for_entry;
                            cin.ignore();
                            system("cls");
                            cout << "Enter the team name : ";
                            getline(cin, Team_name_for_entry);

                            bool value2 = true;

                            if (Team_name_for_entry == Team_name_array[0])
                            { // player data output if team 1
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets" << endl;
                                for (int j = 0; j <= 10; j++)
                                { // for loop     ----------------------------------------------->> convert 1 to 10 at end

                                      if(Player_name_array[j]!=" "){
                                    cout << Player_name_array[j] << "\t\t" << Player_matches_array[j] << "\t\t" << Player_role_array[j] << "\t\t" << Player_runs_array[j] << "\t\t" << Player_wickets_array[j];
                                    cout << endl;
                                
                                }
                             }

                                value2 = false;

                            } // player data output if team 1 end

                            else if (Team_name_for_entry == Team_name_array[1])
                            { // player data output if team 2
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets" << endl;
                                for (int j = 11; j <=21; j++)
                                { // for loop     --------------------------------------->> convert 12 to 21 at end

                                    if(Player_name_array[j]!=" "){
                                    cout << Player_name_array[j] << "\t\t" << Player_matches_array[j] << "\t\t" << Player_role_array[j] << "\t\t" << Player_runs_array[j] << "\t\t" << Player_wickets_array[j];
                                    cout << endl;
                                
                                }
                            }

                                value2 = false;

                            } // player data output if team 2 end

                            else
                            {
                                cout << "Team does not exist. " << endl;
                                value2 = false;
                            }

                            // ############# if code  here for team   3  333333333333333333
                            if (value2 == false)
                            {
                                cout << "Press something to continue...";
                                getch();
                            }
                        }

                        else if (Management_option == "4")
                        { // management menu opyion 4
                            // Update team points
                            string Team_name_for_entry;
                            cin.ignore();
                            system("cls");
                            cout << "Enter the team name : ";
                            getline(cin, Team_name_for_entry);

                            bool value2 = true;
                            bool Value_for_team_point =false;

                            if (Team_name_for_entry == Team_name_array[0])
                            { //  if for points entry team 1

                                for (int j = 0; j < 1; j++)
                                { // for loop
                                    cout << "Enter points of " << Team_name_for_entry << " : ";
                                    cin >> Team_points_array[j];
                                    
                                    
                                }

                                Value_for_team_point=true;
                                value2 = false;

                            } // if for points entry team 1 end

                            else if (Team_name_for_entry == Team_name_array[1])
                            { // if for points entry team 2

                                for (int j = 1; j < 2; j++)
                                { // for loop
                                    cout << "Enter points of " << Team_name_for_entry << " : ";
                                    cin >> Team_points_array[j];


                                }

                                Value_for_team_point=true;
                                value2 = false;

                            } // if for points entry team 2 end

                             // ############# if code  here for team   3  333333333333333333   but make sure its j=2 and j<3


                             if(Value_for_team_point==true){
                                Points_index++;
                             }

                            else
                            {
                                cout << "Team does not exist. " << endl;
                                value2 = false;
                            }

                            
                            if (value2 == false)
                            {
                                cout << "Press something to continue...";
                                getch();
                            }

                        } //  management menu opyion 4

                        else if (Management_option == "5")
                        { // management menu option 5
                          // update player record

                            system("cls");
                            cout << "Enter the name of the player : ";
                            string Player_name;
                            bool Value2 = true;
                            cin >> Player_name;

                            for (int i = 0; i < Player_index; i++)
                            { // for loop for player search
                                if (Player_name == Player_name_array[i])
                                { // if for player search
                                    cout << "---------- Old record ----------" << endl;
                                    cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
                                    cout << Player_name_array[i] << "\t\t" << Player_matches_array[i] << "\t\t" << Player_role_array[i] << "\t\t" << Player_runs_array[i] << "\t\t" << Player_wickets_array[i] << "\t\t" << Player_team_array[i] << endl;

                                    cout << "The franchise name will remain same . Press something to update player record...";
                                    getch();

                                    cout << endl
                                         << "---------- New details ---------- ";
                                    cout << endl
                                         << "Enter player name : ";
                                    cin >> Player_name_array[i];

                                    cout << "Enter player matches : ";
                                    cin >> Player_matches_array[i];

                                    cout << "Enter player role : ";
                                    cin >> Player_role_array[i];

                                    cout << "Enter player runs : ";
                                    cin >> Player_runs_array[i];

                                    cout << "Enter player wickets : ";
                                    cin >> Player_wickets_array[i];

                                    cout << "Player's record is updated .";

                                    Value2 = false;

                                    // here paste

                                } // if for player search end

                            } // for loop for player search end

                            if (Value2 == true)
                            {
                                cout << "Player record not found " << endl;
                                Value2 = false;
                            }

                            // paste here
                            if (Value2 == false)
                            {
                                cout << "Press something to continue...";
                                getch();
                            }
                        }

                        else if (Management_option == "6")
                        { // management menu option 6
                          // Delete player

                            system("cls");
                            cout << "Enter the name of the player : ";
                            string Player_name;
                            bool Value2 = true;
                            int Found = -1;
                            cin >> Player_name;

                            for (int i = 0; i < Player_index; i++)
                            { // for loop for player search
                                if (Player_name == Player_name_array[i])
                                {
                                    Value2 = false;
                                    Found = i;
                                }
                            } //   for loop for player search end

                            if (Value2 == false)
                            { // if for player delete it

                                History_player_name_array[History_index] = Player_name_array[Found];
                                History_player_role_array[History_index] = Player_role_array[Found];
                                History_player_runs_array[History_index] = Player_runs_array[Found];
                                History_player_wickets_array[History_index] = Player_wickets_array[Found];
                                History_player_matches_array[History_index] = Player_matches_array[Found];
                                History_player_team_array[History_index] = Player_team_array[Found];

                                History_index++; // 

                                Player_name_array[Found] = " ";
                                Player_role_array[Found] = " ";
                                Player_runs_array[Found] = 0;
                                Player_wickets_array[Found] = 0;
                                Player_matches_array[Found] = 0;
                                Player_team_array[Found] = " ";

                                cout << "Player " << Player_name << " record deleted " << endl;
                                Value2 = false;

                            } // if for player delete end

                            else
                            {
                                cout << "Player record not found " << endl;
                            }

                            //

                            cout << "Press something to continue...";
                            getch();

                        } // management menu option 6 end

                        else if (Management_option == "7")
                        { // management menu option 7
                          // History of players

                            system("cls");
                            bool Value2 = false;
                            cout << "---------- History of players ----------" << endl;
                            
                            
                            // when History_index is 0, below for looop not executed
                            for (int i = 0; i < History_index; i++)
                            { // for loop for  history
                                if (i == 0)
                            {
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
                            }
                                Value2 = true;

                                if (History_player_name_array[i] != " ")
                                { // for skipping
                                    cout << History_player_name_array[i] << "\t\t" << History_player_matches_array[i] << "\t\t" << History_player_role_array[i] << "\t\t" << History_player_runs_array[i] << "\t\t" << History_player_wickets_array[i] << "\t\t" << History_player_team_array[i]<<endl;
                                } // for loop for delelted players history show
                            
                               

                            } // for loop for history end

                            if (History_index==0)
                            {
                                cout << "No history available. " << endl;
                            }

                            cout << "Press something to continue...";
                            getch();

                        } // management menu option 7 end

                        else if (Management_option == "8")
                        {  // management menu option 8 
                            //  points table
                            system("cls");

                            for(int i=0;i<Points_index;i++){     //   sorting code for team points
                                for(int j=i;j<Points_index;j++){
                                  if(Team_points_array[i]<Team_points_array[j]){
                                    
                                    int Temp_team_points=Team_points_array[i];
                                    Team_points_array[i]=Team_points_array[j];
                                    Team_points_array[j]=Temp_team_points;

                                    string Temp_team_name=Team_name_array[i];
                                    Team_name_array[i]=Team_name_array[j];
                                    Team_name_array[j]=Temp_team_name;



                                  }
                                }
                            }





                             for(int i=0;i<Points_index;i++){  // here Points_index is here containing no of containers that contain points
                              if(i==0){
                                cout<<"Team\tPoints"<<endl;
                              }
                              
                             cout<<Team_name_array[i]<<"\t"<<Team_points_array[i]<<endl;
                             }

                               
                             
                             if (Points_index==0)
                            {
                                cout << "Teams have zero points . " << endl;
                                
                            }

                            cout << "Press something to continue...";
                            getch();

                            

                        }// management menu option 8 end

                        else if (Management_option == "9")
                        { // management menu option 8
                          // search player by name

                            system("cls");
                            cout << "Enter the name of the player : ";
                            string Player_name;
                            bool Value2 = true;
                            int Found = -1;
                            cin >> Player_name;

                            for (int i = 0; i < Player_index; i++)
                            { // for loop for player search that it exist or not
                                if (Player_name == Player_name_array[i])
                                {
                                    Value2 = false;
                                    Found = i;
                                }
                            } //   for loop for player search that it exist or not end

                            if (Value2 == false)
                            { // if for searched player data print
                                
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
                                cout << Player_name_array[Found] << "\t\t" << Player_matches_array[Found] << "\t\t" << Player_role_array[Found] << "\t\t" << Player_runs_array[Found] << "\t\t" << Player_wickets_array[Found] << "\t\t" << Player_team_array[Found] << endl;

                            } // if for searched player data print end

                            else
                            {
                                cout << "Player record not found " << endl;
                            }

                            cout << "Press something to continue...";
                            getch();

                        } // management menu option 8 end

                        else if (Management_option == "10")
                        {
                            // Logout
                            
                            break;
                        }

                        else
                        {
                            cout << "You entered invalid entry ";
                            cout << "Press something to continue...";
                            getch();
                        }

                    } // end of management while loop when the credentils are true end
                } // end of if having true value

                break; // to go out from while loop of option 1

            } //  while loop of mangement menu end

            cout << "Press something to Logout...";
            getch();
        } //   if option 1 end                                       O  P  T  I  O  N   1     E  N  D

        else if (Option == "2") //   O  P  T   I   O  N   2
        {
            while(true){   //  option 2 outer loop 
                system("cls");
                cout<<"1. View team Names "<<endl;
                cout<<"2  View each team player "<<endl;
                cout<<"3. Points table"<<endl;
                cout<<"4. Search player by name"<<endl;
                cout<<"5. Champions of the tournament"<<endl;
                cout<<"6. Exit"<<endl;
                cout<<"Choose option : ";
                string User_option;
                cin>>User_option;
                
                if(User_option=="1"){ // user menu option 1
                  
                    system("cls");
                  
                if(Reuse_variable==0){
                    cout<<"Team names are not announced yet"<<endl;
                    }
                    
                else{
                        for(int i=0;i<Reuse_variable;i++){ // for loop to print team names only that are entered by admin
                        
                        if(i==0){
                            cout<<"---------- Teams ----------"<<endl;
                        }
                        cout<<Team_name_array[i]<<endl;
                        
                    }    // for loop to print team names only that are entered by admin

                } // else end

                   

                    cout << "Press something to continue...";
                    getch();

                }  //user menu option 1 end

                else if(User_option=="2"){  //user menu option 2
                    // view each team player

                     string Team_name_for_entry;
                            cin.ignore();
                            system("cls");
                            if(Reuse_variable!=0){ // if  for checking that the team is entered or not
                            cout << "Enter the team name : ";
                            getline(cin, Team_name_for_entry);

                            bool value2 = true;
                            

                            if (Team_name_for_entry == Team_name_array[0])
                            { // player data output if team 1
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets" << endl;
                                for (int j = 0; j <= 10; j++)
                                { // for loop     ---------------------------------------------->> convert 2 to 11 at end

                                      if(Player_name_array[j]!=" "){
                                    cout << Player_name_array[j] << "\t\t" << Player_matches_array[j] << "\t\t" << Player_role_array[j] << "\t\t" << Player_runs_array[j] << "\t\t" << Player_wickets_array[j];
                                    cout << endl;
                                
                                }
                             }

                                value2 = false;

                            } // player data output if team 1 end

                            else if (Team_name_for_entry == Team_name_array[1])
                            { // player data output if team 2
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets" << endl;
                                for (int j = 11; j <=21; j++)
                                { // for loop     ----------------------------------------------->> convert 12 to 21 at end

                                    if(Player_name_array[j]!=" "){
                                    cout << Player_name_array[j] << "\t\t" << Player_matches_array[j] << "\t\t" << Player_role_array[j] << "\t\t" << Player_runs_array[j] << "\t\t" << Player_wickets_array[j];
                                    cout << endl;
                                
                                }
                            }

                                value2 = false;

                            } // player data output if team 2 end

                            else
                            {
                                cout << "Team does not exist. " << endl;
                                value2 = false;
                            }

                            // ############# if code  here for team   3  333333333333333333
                            if (value2 == false)
                            {
                                cout << "Press something to continue...";
                                getch();
                            }

                        }// if  for checking that the team is entered or not

                        if(Reuse_variable==0){
                            cout<<"Teams have not been registered yet"<<endl;
                            cout << "Press something to continue...";
                            getch();
                        }

               
                }   //user menu option 2 end

                else if(User_option=="3"){  //user menu option 3
                     // points table

                      system("cls");

                            for(int i=0;i<Points_index;i++){     //   sorting code for team points
                                for(int j=i;j<Points_index;j++){
                                  if(Team_points_array[i]<Team_points_array[j]){
                                    
                                    int Temp_team_points=Team_points_array[i];
                                    Team_points_array[i]=Team_points_array[j];
                                    Team_points_array[j]=Temp_team_points;

                                    string Temp_team_name=Team_name_array[i];
                                    Team_name_array[i]=Team_name_array[j];
                                    Team_name_array[j]=Temp_team_name;



                                  }
                                }
                            }





                             for(int i=0;i<Points_index;i++){  // here Points_index is here containing no of containers that contain points
                              if(i==0){
                                cout<<"Team\tPoints"<<endl;
                              }
                              
                             cout<<Team_name_array[i]<<"\t"<<Team_points_array[i]<<endl;
                             }

                               
                             
                             if (Points_index==0)
                            {
                                cout << "Teams have zero points . " << endl;
                                
                            }

                            cout << "Press something to continue...";
                            getch();


                }   //user menu option 3 end

                else if(User_option=="4"){
                     // search player by name

                            system("cls");
                            cout << "Enter the name of the player : ";
                            string Player_name;
                            bool Value2 = true;
                            int Found = -1;
                            cin >> Player_name;

                            for (int i = 0; i < Player_index; i++)
                            { // for loop for player search that it exist or not
                                if (Player_name == Player_name_array[i])
                                {
                                    Value2 = false;
                                    Found = i;
                                }
                            } //   for loop for player search that it exist or not end

                            if (Value2 == false)
                            { // if for searched player data print
                                
                                cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
                                cout << Player_name_array[Found] << "\t\t" << Player_matches_array[Found] << "\t\t" << Player_role_array[Found] << "\t\t" << Player_runs_array[Found] << "\t\t" << Player_wickets_array[Found] << "\t\t" << Player_team_array[Found] << endl;

                            } // if for searched player data print end

                            else
                            {
                                cout << "Player record not found " << endl;
                            }

                            cout << "Press something to continue...";
                            getch();


                }

                else if(User_option=="5"){  //user menu option 4 
                    // Champions of the tournament
                    system("cls");
                    if(Points_index==0){
                        cout<<"Tournamnet has not started yet."<<endl;
                    }
                    
                    else{
                    cout<<"The champions of the tournamnet are "<<Team_name_array[0]<<" having "<<Team_points_array[0]<<" points."<<endl;
                    }

                    cout << "Press something to continue...";
                     getch();

                }  //user menu option 4 end

                

                else if(User_option=="6"){  //user menu option 5
                    // exit
                    
                    break;
                }     //user menu option 5 end

                else{
                      cout<<"Invalid input. Please enter something to continue... "<<endl;
                    getch();

                }

                



            }   //  option 2 outer loop end

            cout << "Press something to continue...";
            getch();
        }

        else if (Option == "3") //   O  P  T   I   O  N   3
        {
            // cout<<"exit main menu ";
            break;
        }

        else
        {
            cout << "Invalid input. Please select correct Option from the main menu" << endl;

            cout << "Press something to continue...";
            getch();
        }

    } // Outer loop

    system("cls");
    cout << "Thanks for using the software. ";
}
