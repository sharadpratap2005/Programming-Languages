/*Write a program to compute the value of m^n using the do while loop. validate that n must be a non-negative integer while m can be any numeric value (integral or real)*/
#include <iostream>
using namespace std;

int main()
{
    double m;
    int n;
    cout << "Enter value of m and n: " << endl;
    cin >> m >> n;
    if (n < 0)
    {
        cout << "n must be non-negative no" << endl;
    }
    else
    {
        double answer = 1;
        do
        {
            answer *= m;
            n--;

        } while (n != 0);
        cout << "Answer is " << answer << endl;
    }
    return 0;
}