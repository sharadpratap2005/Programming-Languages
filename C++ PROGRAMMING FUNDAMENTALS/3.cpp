/*Write a program that takes as input an integer in decimal number system and reverts back printing the octal and hexadecimal equivalents of the same, without using any control statements in the program.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a integer: " << endl;
    cin >> n;
    cout << "The octal value of " << dec << n << " is " << oct << n << endl;
    cout << "The hexadecimal value of " << dec << n << " is " << hex << n << endl;
    return 0;
}