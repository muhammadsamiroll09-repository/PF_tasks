#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


//  P R O T O T Y P E S


void showMainMenu();
void showManagementMenu();
void showUserMenu();

bool login();

void addTeams(string teamNames[], int &teamCount);
void addPlayers(string teamNames[], int teamCount,
                string playerTeam[], string playerName[], string playerRole[],
                int playerMatches[], int playerRuns[], int playerWickets[]);

void viewTeamPlayers(string teamNames[], int teamCount,
                     string playerTeam[], string playerName[], string playerRole[],
                     int playerMatches[], int playerRuns[], int playerWickets[],
                     int playerLimit);

void enterTeamPoints(string teamNames[], int teamCount,
                     int teamPoints[], int &pointsIndex);

void updatePlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[], int playerLimit);

void deletePlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[],
                  string histName[], string histRole[], string histTeam[],
                  int histMatches[], int histRuns[], int histWickets[],
                  int playerLimit, int &histIndex);

void viewHistory(string histName[], string histRole[], string histTeam[],
                 int histMatches[], int histRuns[], int histWickets[], int histIndex);

void showPointsTable(string teamNames[], int teamPoints[], int pointsIndex);

void searchPlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[], int playerLimit);

void viewTeamNames(string teamNames[], int teamCount);
void showChampion(string teamNames[], int teamPoints[], int pointsIndex);

// ============================================================
//                        M A I N
// ============================================================

int main()
{
    const int PLAYER_LIMIT = 500;

    int pointsIndex = 0; // how many teams have points entered
    int teamCount = 0;   // how many teams were added
    int histIndex = 0;   // how many players are in history

    string teamNames[10];
    int teamPoints[10];

    string playerTeam[PLAYER_LIMIT];
    string playerName[PLAYER_LIMIT];
    string playerRole[PLAYER_LIMIT];
    int playerMatches[PLAYER_LIMIT];
    int playerRuns[PLAYER_LIMIT];
    int playerWickets[PLAYER_LIMIT];

    // initialize player arrays with blank/zero
    for (int i = 0; i < PLAYER_LIMIT; i++)
    {
        playerName[i] = " ";
        playerTeam[i] = " ";
        playerRole[i] = " ";
        playerMatches[i] = 0;
        playerRuns[i] = 0;
        playerWickets[i] = 0;
    }

    string histName[PLAYER_LIMIT];
    string histRole[PLAYER_LIMIT];
    string histTeam[PLAYER_LIMIT];
    int histMatches[PLAYER_LIMIT];
    int histRuns[PLAYER_LIMIT];
    int histWickets[PLAYER_LIMIT];

    while (true)
    {
        system("cls");
        showMainMenu();

        string option;
        cin >> option;

        // -------- OPTION 1 : Management Login --------
        if (option == "1")
        {
            if (!login())
            {
                cout << "Press something to continue...";
                getch();
                continue;
            }

            // management inner menu
            while (true)
            {
                system("cls");
                showManagementMenu();

                string mOption;
                cin >> mOption;

                if (mOption == "1")
                    addTeams(teamNames, teamCount);

                else if (mOption == "2")
                    addPlayers(teamNames, teamCount,
                               playerTeam, playerName, playerRole,
                               playerMatches, playerRuns, playerWickets);

                else if (mOption == "3")
                    viewTeamPlayers(teamNames, teamCount,
                                    playerTeam, playerName, playerRole,
                                    playerMatches, playerRuns, playerWickets, PLAYER_LIMIT);

                else if (mOption == "4")
                    enterTeamPoints(teamNames, teamCount, teamPoints, pointsIndex);

                else if (mOption == "5")
                    updatePlayer(playerName, playerRole, playerTeam,
                                 playerMatches, playerRuns, playerWickets, PLAYER_LIMIT);

                else if (mOption == "6")
                    deletePlayer(playerName, playerRole, playerTeam,
                                 playerMatches, playerRuns, playerWickets,
                                 histName, histRole, histTeam,
                                 histMatches, histRuns, histWickets,
                                 PLAYER_LIMIT, histIndex);

                else if (mOption == "7")
                    viewHistory(histName, histRole, histTeam,
                                histMatches, histRuns, histWickets, histIndex);

                else if (mOption == "8")
                    showPointsTable(teamNames, teamPoints, pointsIndex);

                else if (mOption == "9")
                    searchPlayer(playerName, playerRole, playerTeam,
                                 playerMatches, playerRuns, playerWickets, PLAYER_LIMIT);

                else if (mOption == "10")
                {
                    cout << "Press something to Logout...";
                    getch();
                    break;
                }

                else
                {
                    cout << "Invalid entry. Press something to continue...";
                    getch();
                }
            }
        }

        // -------- OPTION 2 : User (Fan) --------
        else if (option == "2")
        {
            while (true)
            {
                system("cls");
                showUserMenu();

                string uOption;
                cin >> uOption;

                if (uOption == "1")
                    viewTeamNames(teamNames, teamCount);

                else if (uOption == "2")
                    viewTeamPlayers(teamNames, teamCount,
                                    playerTeam, playerName, playerRole,
                                    playerMatches, playerRuns, playerWickets, PLAYER_LIMIT);

                else if (uOption == "3")
                    showPointsTable(teamNames, teamPoints, pointsIndex);

                else if (uOption == "4")
                    searchPlayer(playerName, playerRole, playerTeam,
                                 playerMatches, playerRuns, playerWickets, PLAYER_LIMIT);

                else if (uOption == "5")
                    showChampion(teamNames, teamPoints, pointsIndex);

                else if (uOption == "6")
                    break;

                else
                {
                    cout << "Invalid input. Press something to continue...";
                    getch();
                }
            }

            cout << "Press something to continue...";
            getch();
        }

        // -------- OPTION 3 : Exit --------
        else if (option == "3")
            break;

        else
        {
            cout << "Invalid input. Please select a correct option." << endl;
            cout << "Press something to continue...";
            getch();
        }
    }

    system("cls");
    cout << "Thanks for using the software." << endl;
    return 0;
}

// ============================================================
//               F U N C T I O N   D E F I N I T I O N S
// ============================================================

// ---------- Menu display functions ----------

void showMainMenu()
{
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "---------- PAKISTAN SUPER LEAGUE - PLAYER MANAGEMENT SYSTEM ----------" << endl;
    cout << "-----------------------------------------------------------------------" << endl
         << endl;
    cout << "Main Menu :" << endl;
    cout << "1. Login as PSL Management" << endl;
    cout << "2. Login as User (Fan)" << endl;
    cout << "3. Logout from system" << endl;
    cout << "Choose option : ";
}

void showManagementMenu()
{
    cout << "1.  Add team" << endl;
    cout << "2.  Add Player to any team" << endl;
    cout << "3.  View the team players" << endl;
    cout << "4.  Enter team points" << endl;
    cout << "5.  Update player record" << endl;
    cout << "6.  Delete Player" << endl;
    cout << "7.  History of Players" << endl;
    cout << "8.  Points table" << endl;
    cout << "9.  Search player by name" << endl;
    cout << "10. Logout" << endl;
    cout << "Choose option : ";
}

void showUserMenu()
{
    cout << "1. View team Names" << endl;
    cout << "2. View each team player" << endl;
    cout << "3. Points table" << endl;
    cout << "4. Search player by name" << endl;
    cout << "5. Champions of the tournament" << endl;
    cout << "6. Exit" << endl;
    cout << "Choose option : ";
}

// ---------- Login ----------

bool login()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Enter your credentials. ---- Attempt : " << i + 1 << endl;

        string username;
        cout << "Enter the user name : ";
        cin.ignore();
        getline(cin, username);

        string password;
        cout << "Enter the password : ";
        cin >> password;

        if (username == "Kingbabar" && password == "5656")
            return true;

        if (i == 2)
        {
            cout << "Too many wrong attempts." << endl;
            return false;
        }

        cout << "Wrong credentials. Please enter correct password and username." << endl;
        cout << "Press something to continue...";
        getch();
    }
    return false;
}

// ---------- Add Teams ----------

void addTeams(string teamNames[], int &teamCount)
{
    system("cls");
    cout << "Enter the number of teams you want to add : ";
    cin >> teamCount;
    cin.ignore();

    for (int i = 0; i < teamCount; i++)
    {
        cout << "Enter team " << i + 1 << " name : ";
        getline(cin, teamNames[i]);
    }

    cout << "Teams added successfully." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- Add Players ----------

void addPlayers(string teamNames[], int teamCount,
                string playerTeam[], string playerName[], string playerRole[],
                int playerMatches[], int playerRuns[], int playerWickets[])
{
    system("cls");
    string teamEntry;
    cin.ignore();
    cout << "Enter the team name : ";
    getline(cin, teamEntry);

    // find which team it is
    int teamIndex = -1;
    for (int i = 0; i < teamCount; i++)
    {
        if (teamEntry == teamNames[i])
        {
            teamIndex = i;
            break;
        }
    }

    if (teamIndex == -1)
    {
        cout << "Team does not exist." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    // each team gets 11 slots starting at teamIndex * 11
    int start = teamIndex * 11;

    for (int j = 0; j < 11; j++)
    {
        system("cls");
        cout << "Player " << j + 1 << " data :" << endl;

        cout << "Enter player name : ";
        cin >> playerName[start + j];

        cout << "Enter player matches : ";
        cin >> playerMatches[start + j];

        cout << "Enter player role : ";
        cin >> playerRole[start + j];

        cout << "Enter player runs : ";
        cin >> playerRuns[start + j];

        cout << "Enter player wickets : ";
        cin >> playerWickets[start + j];

        playerTeam[start + j] = teamEntry;
    }

    cout << "Players added successfully." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- View Team Players ----------

void viewTeamPlayers(string teamNames[], int teamCount,
                     string playerTeam[], string playerName[], string playerRole[],
                     int playerMatches[], int playerRuns[], int playerWickets[],
                     int playerLimit)
{
    system("cls");

    if (teamCount == 0)
    {
        cout << "Teams have not been registered yet." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    string teamEntry;
    cin.ignore();
    cout << "Enter the team name : ";
    getline(cin, teamEntry);

    int teamIndex = -1;
    for (int i = 0; i < teamCount; i++)
    {
        if (teamEntry == teamNames[i])
        {
            teamIndex = i;
            break;
        }
    }

    if (teamIndex == -1)
    {
        cout << "Team does not exist." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    int start = teamIndex * 11;
    cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets" << endl;

    for (int j = 0; j < 11; j++)
    {
        if (playerName[start + j] != " ")
        {
            cout << playerName[start + j] << "\t\t"
                 << playerMatches[start + j] << "\t\t"
                 << playerRole[start + j] << "\t\t"
                 << playerRuns[start + j] << "\t\t"
                 << playerWickets[start + j] << endl;
        }
    }

    cout << "Press something to continue...";
    getch();
}

// ---------- Enter Team Points ----------

void enterTeamPoints(string teamNames[], int teamCount,
                     int teamPoints[], int &pointsIndex)
{
    system("cls");
    string teamEntry;
    cin.ignore();
    cout << "Enter the team name : ";
    getline(cin, teamEntry);

    int teamIndex = -1;
    for (int i = 0; i < teamCount; i++)
    {
        if (teamEntry == teamNames[i])
        {
            teamIndex = i;
            break;
        }
    }

    if (teamIndex == -1)
    {
        cout << "Team does not exist." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    cout << "Enter points of " << teamEntry << " : ";
    cin >> teamPoints[teamIndex];

    // only count this team if it hasn't been counted before
    if (teamIndex >= pointsIndex)
        pointsIndex = teamIndex + 1;

    cout << "Points updated." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- Update Player ----------

void updatePlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[], int playerLimit)
{
    system("cls");
    cout << "Enter the name of the player : ";
    string name;
    cin >> name;

    for (int i = 0; i < playerLimit; i++)
    {
        if (name == playerName[i])
        {
            cout << "---------- Old record ----------" << endl;
            cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
            cout << playerName[i] << "\t\t"
                 << playerMatches[i] << "\t\t"
                 << playerRole[i] << "\t\t"
                 << playerRuns[i] << "\t\t"
                 << playerWickets[i] << "\t\t"
                 << playerTeam[i] << endl;

            cout << "Franchise will remain the same. Press something to update...";
            getch();

            cout << endl
                 << "---------- New details ----------" << endl;
            cout << "Enter player name : ";
            cin >> playerName[i];
            cout << "Enter player matches : ";
            cin >> playerMatches[i];
            cout << "Enter player role : ";
            cin >> playerRole[i];
            cout << "Enter player runs : ";
            cin >> playerRuns[i];
            cout << "Enter player wickets : ";
            cin >> playerWickets[i];

            cout << "Player record updated." << endl;
            cout << "Press something to continue...";
            getch();
            return;
        }
    }

    cout << "Player record not found." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- Delete Player ----------

void deletePlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[],
                  string histName[], string histRole[], string histTeam[],
                  int histMatches[], int histRuns[], int histWickets[],
                  int playerLimit, int &histIndex)
{
    system("cls");
    cout << "Enter the name of the player : ";
    string name;
    cin >> name;

    for (int i = 0; i < playerLimit; i++)
    {
        if (name == playerName[i])
        {
            // save to history
            histName[histIndex] = playerName[i];
            histRole[histIndex] = playerRole[i];
            histRuns[histIndex] = playerRuns[i];
            histWickets[histIndex] = playerWickets[i];
            histMatches[histIndex] = playerMatches[i];
            histTeam[histIndex] = playerTeam[i];
            histIndex++;

            // clear the slot
            playerName[i] = " ";
            playerRole[i] = " ";
            playerTeam[i] = " ";
            playerRuns[i] = 0;
            playerWickets[i] = 0;
            playerMatches[i] = 0;

            cout << "Player " << name << " record deleted." << endl;
            cout << "Press something to continue...";
            getch();
            return;
        }
    }

    cout << "Player record not found." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- View History ----------

void viewHistory(string histName[], string histRole[], string histTeam[],
                 int histMatches[], int histRuns[], int histWickets[], int histIndex)
{
    system("cls");
    cout << "---------- History of players ----------" << endl;

    if (histIndex == 0)
    {
        cout << "No history available." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;

    for (int i = 0; i < histIndex; i++)
    {
        if (histName[i] != " ")
        {
            cout << histName[i] << "\t\t"
                 << histMatches[i] << "\t\t"
                 << histRole[i] << "\t\t"
                 << histRuns[i] << "\t\t"
                 << histWickets[i] << "\t\t"
                 << histTeam[i] << endl;
        }
    }

    cout << "Press something to continue...";
    getch();
}

// ---------- Points Table (with sorting) ----------

void showPointsTable(string teamNames[], int teamPoints[], int pointsIndex)
{
    system("cls");

    if (pointsIndex == 0)
    {
        cout << "Teams have zero points." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    // selection sort - highest points first
    for (int i = 0; i < pointsIndex; i++)
    {
        for (int j = i; j < pointsIndex; j++)
        {
            if (teamPoints[i] < teamPoints[j])
            {
                // swap points
                int tempPoints = teamPoints[i];
                teamPoints[i] = teamPoints[j];
                teamPoints[j] = tempPoints;
                // swap names
                string tempName = teamNames[i];
                teamNames[i] = teamNames[j];
                teamNames[j] = tempName;
            }
        }
    }

    cout << "Team\tPoints" << endl;
    for (int i = 0; i < pointsIndex; i++)
        cout << teamNames[i] << "\t" << teamPoints[i] << endl;

    cout << "Press something to continue...";
    getch();
}

// ---------- Search Player ----------

void searchPlayer(string playerName[], string playerRole[], string playerTeam[],
                  int playerMatches[], int playerRuns[], int playerWickets[], int playerLimit)
{
    system("cls");
    cout << "Enter the name of the player : ";
    string name;
    cin >> name;

    for (int i = 0; i < playerLimit; i++)
    {
        if (name == playerName[i])
        {
            cout << "Player name\tPlayer matches\tPlayers role\tPlayers runs\tPlayer wickets\tPlayer Franchise" << endl;
            cout << playerName[i] << "\t\t"
                 << playerMatches[i] << "\t\t"
                 << playerRole[i] << "\t\t"
                 << playerRuns[i] << "\t\t"
                 << playerWickets[i] << "\t\t"
                 << playerTeam[i] << endl;

            cout << "Press something to continue...";
            getch();
            return;
        }
    }

    cout << "Player record not found." << endl;
    cout << "Press something to continue...";
    getch();
}

// ---------- View Team Names ----------

void viewTeamNames(string teamNames[], int teamCount)
{
    system("cls");

    if (teamCount == 0)
    {
        cout << "Team names are not announced yet." << endl;
        cout << "Press something to continue...";
        getch();
        return;
    }

    cout << "---------- Teams ----------" << endl;
    for (int i = 0; i < teamCount; i++)
        cout << teamNames[i] << endl;

    cout << "Press something to continue...";
    getch();
}

// ---------- Show Champion ----------

void showChampion(string teamNames[], int teamPoints[], int pointsIndex)
{
    system("cls");

    if (pointsIndex == 0)
    {
        cout << "Tournament has not started yet." << endl;
    }
    else
    {
        cout << "The champions of the tournament are "
             << teamNames[0] << " having "
             << teamPoints[0] << " points." << endl;
    }

    cout << "Press something to continue...";
    getch();
}