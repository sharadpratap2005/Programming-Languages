/*C Program to Find Simple Interest*/
#include <stdio.h>
int main()
{
    int p, r, t;
    printf("Enter principal amount, rate of interest , time of period");
    scanf("%d%d%d", &p, &r, &t);
    printf("Simple Interest is %d", (p * r * t) / 100);
    return 0;
}