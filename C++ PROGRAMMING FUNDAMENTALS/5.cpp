/*Write a program to input money amount as a float (e.g amount is 18.04 ) and seprates this into two int variables as(rs: 18, ps: 4)*/
#include <iostream>
using namespace std;

int main()
{
    float money;
    cout << "Enter amount of money in Rs: " << endl;
    cin >> money;
    int temp = money;
    float temp2 = money - temp;
    cout.precision(2);
    cout << "Rs:" << temp << " Paise:s" << 100 * temp2 << endl;
    return 0;
}