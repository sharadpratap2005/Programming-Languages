/*C Program to Print the ASCII Value of a Character*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character: ");
    scanf("%c", &c);
    printf("ASCII value of %c is %d", c, c);
    return 0;
}