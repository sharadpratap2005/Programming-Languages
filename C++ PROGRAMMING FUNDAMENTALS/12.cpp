/*Write a program to input any integer value from user and print its reverse. The program must not be bound by the number of digits in the input number. You are free to use any data type of your code to satisfy this criterion */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = num.size(); i >= 0; i--)
    {
        cout << num[i];
    }
}