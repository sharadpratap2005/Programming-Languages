/*Write a program to calculate and print the sum of series:
1/2 + 3/5 + 5/8...upto Nth term*/
#include <iostream>
using namespace std;
int main()
{

    int n;
    float sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += float(2 * i - 1) / (3 * i - 1);
    }
    cout << " Sum of series upto " << n << " term " << " is " << sum;
    return 0;
}
