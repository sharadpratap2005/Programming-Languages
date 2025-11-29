/*9. Write a program to print the ASCII value of a character. */

#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Character :  ");
    scanf("%c", &c);
    printf("\nASCII value of %c is %d\n", c, c);
    return 0;
}