/*C Program to Check Whether a Number is Prime or Not*/
#include <stdio.h>

int main()
{
    int n;
    int flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return 0;
}