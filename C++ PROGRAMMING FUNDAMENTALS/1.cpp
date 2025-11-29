/*Write a program to compute and print the factorial of each intger upto N */
#include <iostream>
using namespace std;

long double Factorial(int num)
{
    long double fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "The Factorial of " << i << " is " << Factorial(i) << endl;
    }
    return 0;
}