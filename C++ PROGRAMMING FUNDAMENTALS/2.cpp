/*Write a program that computes the simple interest and compound interest payable on principal amount (in Rs) of loan borrowed by the customer from a bank for a given period of time (in years ) at specific rate of interest. Further determine whether the bank will benefit by charging simple interest or compund interest .*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float p, r, si, ci;
    int t;
    cout << "Enter Principal, Rate and Time: " << endl;
    cin >> p >> r >> t;
    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;
    // cout.precision(2);
    cout << "Simple Interest is " << si << endl;
    cout << "Compound Interest is " << ci << endl;
    if (si > ci)
    {
        cout << "Bank will benefit by charging Simple Interest" << endl;
    }
    else
    {
        cout << "Bank will benefit by charging Compound Interest" << endl;
    }
    return 0;
}