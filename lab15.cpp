#include <iostream>
using namespace std;
//Program for to show whether the football goes into the pool or miss the goal
bool goal(string feild[][16]){

    for(int i=1;i<=2;i++){
        for(int j=2;j<=4;j++){
            if(feild[i][j]=="O"){
                return true;
            }
        }
    }

    return false;
}

main()
{
    string feild[7][16] = {
        {"", "", "", "", "", "", ""},
        {"", "#", "", "", "",   "#", ""},
        {"", "#", "", "", "O",  "#", ""},
        {"", "#", "#", "#", "#","#", ""},
        {"", "", "",   "#", "", "", ""},
        {"", "", "",   "#", "", "", ""},
        {"", "", "",   "#", "", "", ""}};

    if (goal(feild))
    {
        cout << "Goal";
    }
    else
    {
        cout << "Miss";
    }
}