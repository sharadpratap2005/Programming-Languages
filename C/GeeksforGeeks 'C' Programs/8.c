/*C Program to Swap Two Numbers*/
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter first Number: ");
    scanf("%d", &a);
    printf("Enter second Number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping\nfirst no is %d and second no is %d", a, b);
    return 0;
}