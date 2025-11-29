/*Write a porgram which takes principal amount.Rate ofinterest,and Time duration from the user and calculates the simple interest/compoound interest (as per the choice input by the user) along with the total amount*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p, r, si, ci;
    int t;
    char choice;
    cout << "Enter Principal, Rate and Time: " << endl;
    cin >> p >> r >> t;
    cout << "Enter 's' for SI and 'c' for compound interest" << endl;
    cin >> choice;

    if (choice == 's')
    {
        si = (p * r * t) / 100;

        cout << "Simple Interest is " << si << endl;
        cout << "Total Amount is " << p + si;
    }
    else
    {
        ci = p * pow((1 + r / 100), t) - p;
        cout << "Compound Interest is " << ci << endl;
        cout << "Total Amount is " << p + ci;
    }
    return 0;
}