/*8. Write a program to check whether the number is prime or not. */

#include <stdio.h>
int main()
{
    int n, flag = 0;

    printf("Enter the Number :  ");
    scanf("%d", &n);

    if (n <= 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
    }

    if (flag == 0)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is not a Prime Numebr", n);
    }

    return 0;
}