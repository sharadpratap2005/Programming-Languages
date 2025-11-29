/*Design an application that takes as input a positive integer (upto 50,000) and prints the number in words as illustrated. For instance, if input value entered by a user is 2602, then the output must be TWO SIX ZERO TWO. The program may incorporate the use of multiple control statements to suit the requirement or processing. Proper validation checks must also be applied*/
#include <iostream>
#include <algorithm>
using namespace std;

// Digit Counter
int Digit_Count(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{

    // Input the integer
    int num;
    cout << "Enter a positive integer(upto 50,000): ";
    cin >> num;

    // Checking Validation
    if (num <= 0 || num > 50000)
    {
        cout << "Invalid Number" << endl;
        return 0;
    }
    else
    {
        int size = Digit_Count(num);
        int array[size];

        for (int i = 0; i < size; i++)
        {
            array[i] = num % 10;
            num = num / 10;
        }
        reverse(array, array + size);
        for (int i = 0; i < size; i++)
        {
            switch (array[i])
            {
            case 0:
                cout << "ZERO ";
                break;
            case 1:
                cout << "ONE ";
                break;
            case 2:
                cout << "TWO ";
                break;
            case 3:
                cout << "THREE ";
                break;
            case 4:
                cout << "FOUR ";
                break;
            case 5:
                cout << "FIVE ";
                break;
            case 6:
                cout << "SIX ";
                break;
            case 7:
                cout << "SEVEN ";
                break;
            case 8:
                cout << "EIGHT ";
                break;
            case 9:
                cout << "NINE ";
                break;
            default:

                break;
            }
        }
    }
}
