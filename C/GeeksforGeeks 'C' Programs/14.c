/*C Program to Find Compound Interest*/
#include <math.h>
#include <stdio.h>
int main()
{
    double p, r, n, t, a, ci;

    printf("Enter Initial principal amount, interest rate, no of times interest applied, time of period");
    scanf("%lf%lf%lf%lf", &p, &r, &n, &t);
    a = p * pow(1 + (r / (100 * n)), n * t); // Corrected formula
    ci = a - p;
    printf("Compunt Interest is %.2lf", ci);
    return 0;
}