/*C Program to Add Two Complex Numbers */
#include <stdio.h>
int main()
{
    int r1, r2, i1, i2;
    printf("Enter real part of first number: ");
    scanf("%d", &r1);
    printf("Enter imaginary part of first number: ");
    scanf("%d", &i1);
    printf("Enter real part of second number: ");
    scanf("%d", &r2);
    printf("Enter imaginary part of second number: ");
    scanf("%d", &i2);
    if (i1 + i2 < 0)
    {
        printf("Sum is %d%di", r1 + r2, i1 + i2);
    }
    else
    {
        printf("Sum is %d+%di", r1 + r2, i1 + i2);
    }
    return 0;
}