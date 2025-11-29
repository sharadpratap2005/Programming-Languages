/*Write a program to input three numbers from user and print them one after the other on seprate lines. Further display them in reverse order of their input, again on seprate lines. Do not make use of any conditional control statement*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    cout << endl;

    cout << a << endl
         << b << endl
         << c << endl;
    cout << endl;

    cout << c << endl
         << b << endl
         << a << endl;
    return 0;
}