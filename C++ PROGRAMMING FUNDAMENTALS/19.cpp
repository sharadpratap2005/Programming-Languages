/*Write a program to emulate the username-password interface using c++. THough graphical interface is not recquired , mask every character input for the password with an asterisk symbol. Later once the input is over, display the password.*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    string username;
    char ch;
    string password;
    cout << "\n\n\n";
    cout << "\t\t\t**** ACCOUNT LOGIN PAGE ****" << endl;
    cout << "\t\tEnter Username: ";
    getline(cin, username);
    cout << "\t\tEnter Password: ";
    while (ch != 13)
    {
        ch = _getch();
        if (ch == 8)
        {
            password.pop_back();
        }
        else
        {
            cout << "*";
            password.push_back(ch);
        }
    }
    cout << endl
         << endl;
    cout << "\t\tUsername: " << username << endl;
    cout << "\t\tPassword: " << password << endl;
    return 0;
}