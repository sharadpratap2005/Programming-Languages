/*WAP that prompts the user to input an alphabet (uppercase or lowercase) and then prints the names of all months and weekdays starting with that alphabet.*/
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: " << endl;
    cin >> c;
    char hello[30][30] = {"jan", "feb", "march", "april", "may", "june", "july", "august", "sep", "oct", "nov", "dec", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

    for (int i = 0; i < 20; i++)
    {
        if (hello[i][0] == c)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << hello[i][j] << " ";
            }
        }
    }
    return 0;
}
