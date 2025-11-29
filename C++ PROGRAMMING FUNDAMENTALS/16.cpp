/*Write a program to generate the following patterns of numbers on screen
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 2; i <= n + 1; i++)
    {
        if (i % 2 == 0)
        {
            int num = 0;
            for (int j = 2; j <= i; j++)
            {
                if (num == 1)
                {
                    num = 0;
                    cout << num << " ";
                }
                else
                {
                    num = 1;
                    cout << num << " ";
                }
            }
            cout << endl;
        }
        else
        {
            int num = 1;
            for (int j = 2; j <= i; j++)
            {
                if (num == 1)
                {
                    num = 0;
                    cout << num << " ";
                }
                else
                {
                    num = 1;
                    cout << num << " ";
                }
            }
            cout << endl;
        }
    }
}
