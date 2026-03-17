#include <iostream>
using namespace std;
main()
{
    string username, password, studentname, coursename, n1, n2;
    int choice, studentage;

    for (int k = 3; k >= 1; k--)
    {
        cout << "Enter the usernname : ";
        cin >> username;

        cout << "Enter the password : ";
        cin >> password;

        if (username == "Admin" && password == "1234")
        {
            cout << "Login Succesfully" << endl;
            break;
        }
        else if((k == 1) && !(username == "Admin" && password == "1234"))
        {
            cout << "Too many wrong attempts ";
            return 0;
        }
         else
        {
            cout << "Wrong Login!" << endl;
        }
    }
      

    
        for (int i = 1; i <= 5; i++){
      cout <<endl<< "---- University Management System ----" << endl;
            cout << "1. Add Student " << endl;
            cout << "2. View Student " << endl;
            cout << "3. Add Course" << endl;
            cout << "4. Exit" << endl;

            cout << "Enter Choice : ";
            cin >> choice;

            if (choice == 1)
            {
                cout << "Enter student name : ";
                cin >> studentname;

                cout << "Enter student age : ";
                cin >> studentage;

                cout << "Student added successfully " << endl;
            }

            else if (choice == 2)
            {
                if (studentname != "")
                {
                    cout << "Student name : " << studentname << endl;
                    cout << "Student age : " << studentage << endl;
                }
                else
                {
                    cout << "No student record found!" << endl;
                }
            }

            else if (choice == 3)
            {
                cout << "Add course : ";
                cin >> coursename;
                cout << "Course added successfully" << endl;
            }

            else if (choice == 4)
            {
                cout << "Exit";
                break;
            }

            else
            {
                cout << "invalid input";
            }
        }
    

}
