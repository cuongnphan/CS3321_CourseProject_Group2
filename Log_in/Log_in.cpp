// Log_in.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

void showLoginMenu() { //display a bunch of text lines
    cout << "MENU\n";
    cout << "1. Customer login\n";
    cout << "2. Support login\n";
    cout << "3. Inventory login\n";
    cout << "Make a choice: ";    
}

void customer() {
    string strUsername, strPassword, User, Pass;
    fstream customerfile;
    string line;
    
    cout << "Please enter Username: ";
    cin >> strUsername;
    cout << "Please enter Password: ";
    cin >> strPassword;

    ifstream readSource("CustomerCredential.txt");

    while (!readSource.eof()) {
        readSource >> User >> Pass;
        if (User == strUsername && Pass == strPassword) {
            cout << "Welcome back, " << User << endl;
            //Load the Customer module
        }
        else cout << "Wrong credentials!";
    }
}

void Staff() {
    string strUsername, strPassword, User, Pass;
    fstream customerfile;
    string line;

    cout << "Please enter Username: ";
    cin >> strUsername;
    cout << "Please enter Password: ";
    cin >> strPassword;

    ifstream readSource("StaffCredential.txt");

    while (!readSource.eof()) {
        readSource >> User >> Pass;
        if (User == strUsername && Pass == strPassword) {
            cout << "Welcome back, " << User << endl;
            //Load the Customer module
        }
        else cout << "Wrong credentials!";
    }
}

void Support() {
    string strUsername, strPassword, User, Pass;
    fstream customerfile;
    string line;

    cout << "Please enter Username: ";
    cin >> strUsername;
    cout << "Please enter Password: ";
    cin >> strPassword;

    ifstream readSource("SupportCredential.txt");

    while (!readSource.eof()) {
        readSource >> User >> Pass;
        if (User == strUsername && Pass == strPassword) {
            cout << "Welcome back, " << User << endl;
            //Load the Customer module
        }
        else cout << "Wrong credentials!";
    }
}

int main()
{
    int choice;

    do {
        showLoginMenu();
        cin >> choice;
        switch (choice) {
        case 1:
            //load the customer module;
            cout << "Customer module loaded!\n";
            customer();
            break;
        case 2:
            //load the support module
            cout << "Support module loaded!\n";
            Support();
            break;
        case 3:
            //load the inventory module
            cout << "Staff module loaded!\n";
            Staff();
            break;
        default:
            //show wrong choice message
            cout << "Invalid choice\n";            

        }
    } 
    while (choice < 0 || choice >3);
    
    system("pause");
    return 0;
}

