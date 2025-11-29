/*C Program to Calculate Fahrenheit to Celsius*/
#include <stdio.h>
int main()
{
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    float celsius;
    celsius = ((f - 32) * 5) / 9;
    printf("Temperature in celsius is %f", celsius);
    return 0;
}