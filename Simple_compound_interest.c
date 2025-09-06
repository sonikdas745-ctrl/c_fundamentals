#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time (in years): ");
    scanf("%f", &t);
    float si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    float ci = p * pow((1 + r / 100), t) - p;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}