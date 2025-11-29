/*Write a program to determine whether a given number is an Armstrong Number or not. Further print all Armstrong numbers between two boundary values (both inclusive) inout by thte user. (for instance , 153 is Armstrong number as the 1^3+5^3+3^3 = 153)*/
#include <iostream>
#include <cmath>
using namespace std;

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

int Check_Armstrong(int num)
{

    int original_num = num;
    int sum = 0;
    int size = Digit_Count(num);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < size; i++)
    {
        sum += pow(array[i], size);
    }
    if (original_num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num, start, end;
    cout << "Enter the number: ";
    cin >> num;
    if (Check_Armstrong(num))
    {
        cout << num << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << num << " is not an Armstrong Number" << endl;
    }
    cout << endl;
    cout << "Enter the boundary values to check numbers: " << endl;
    cin >> start;
    cin >> end;

    cout << "Armstrong Numbers lies between " << start << " and " << end << " are : " << endl;
    for (int i = start; i <= end; i++)
    {
        if (Check_Armstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}