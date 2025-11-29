/*C Program to Print Prime Numbers From 1 to N */
#include <stdio.h>
int isPrime(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}