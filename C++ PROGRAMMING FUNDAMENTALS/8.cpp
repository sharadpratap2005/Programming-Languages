/*Design a pattern of  slashes displaying a diamond as shown below. The design must be extensible upto 2*N rows and 2*N columns, where values of N are input by the user at runtime.

         /\
        //\\
       ///\\\
      ////\\\\
     /////\\\\\
    //////\\\\\\
   ///////\\\\\\\
  ////////\\\\\\\\
 /////////\\\\\\\\\
//////////\\\\\\\\\\
\\\\\\\\\\//////////
 \\\\\\\\\/////////
  \\\\\\\\////////
   \\\\\\\///////
    \\\\\\//////
     \\\\\/////
      \\\\////
       \\\///
        \\//
         \/
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = n; j >= 1; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << "/";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "\\";
        }
    }
    for (int i = n; i >= 1; i--)
    {
        cout << "\n";
        for (int j = n; j >= 1; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << "\\";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "/";
        }
    }
    return 0;
}