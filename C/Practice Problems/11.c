#include <stdio.h>
int Digits_Counter(int n)
{
    int flag = 0;
    while (n != 0)
    {
        flag++;
        n /= 10;
    }
    return flag;
}
void Palindrome_Checker(int n)
{
    int flag = 0;
    int no_of_digit = Digits_Counter(n);
    int array[no_of_digit];
    for (int i = 0; i < no_of_digit; i++)
    {
        array[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < no_of_digit; i++)
    {
        printf("%d", array[i]);
    }
    for (int i = 0; i < no_of_digit / 2; i++)
    {
        if (array[i] == array[n - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("\nNumber is Palindrome");
    }
    else
    {
        printf("\nNumber is not Palindrome");
    }
}
int main()
{
    printf("\n\t\tPalindrome Checker\n");
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    Palindrome_Checker(num);
    return 0;
}