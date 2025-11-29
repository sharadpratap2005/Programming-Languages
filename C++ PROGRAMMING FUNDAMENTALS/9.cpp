/*Design an application that
(a) Prompts the user to enter two numbers.
(b) Prints all prime numbers between them.
(c) The user must then be prompted whether he wants to enter another number. Based on the response Y/N, the application must decide to repeat steps (a) and (b).
(d) Uses a do-While loop to implement the iteration logic for (c).
(e) The two numbers input by the user may not necessarily be in increasing order. Sorting may be recquired on part of the application.
(f) The input numbers must be in the range of[0 to 50000]. Validate the input to be within this range.
*/

#include <iostream>
using namespace std;

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    char response;
    do
    {

        int first_no, second_no;
        cout << "Enter two numbers of the range [0 to 50,000]: " << endl;
        cin >> first_no >> second_no;
        if (first_no < 0 || second_no < 0 || first_no > 50000 || second_no > 50000)
        {
            cout << "Invalid Input" << endl;
        }
        else
        {
            if (first_no > second_no)
            {
                int temp = first_no;
                first_no = second_no;
                second_no = temp;
            }
            cout << "Prime Numbers between " << first_no << " and " << second_no << " are: " << endl;
            for (int i = first_no; i <= second_no; i++)
            {
                if (isPrime(i))
                {
                    cout << "\t" << i;
                }
            }
        }
    askchoice:
        cout << endl
             << "Do you want to continue [Y/N]: " << endl;
        cin >> response;

        if (response == 'y' || response == 'Y' || response == 'n' || response == 'N')
        {
            continue;
        }
        else
        {
            goto askchoice;
        }

    } while (response == 'y' || response == 'Y');

    return 0;
}
