/*7. Write a program to find the remainder of 2 numbers. */

#include <stdio.h>
int main()
{
    int a, b, remainder;
    printf("Enter the First Number:  ");
    scanf("%d", &a);
    printf("Enter the Second Number:  ");
    scanf("%d", &b);
    printf("Remainder is %d", a % b);
    return 0;
}