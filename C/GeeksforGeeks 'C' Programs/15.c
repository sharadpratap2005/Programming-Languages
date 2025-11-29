/*C Program for Area And Perimeter Of Rectangle */
#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter Length: ");
    scanf("%d", &l);
    printf("Enter Breadth: ");
    scanf("%d", &b);
    printf("Area of Rectangle is %d\n", l * b);
    printf("Perimeter of Rectangle is %d", 2 * (l + b));
    return 0;
}