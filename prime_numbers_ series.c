#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of terms");
    scanf("%d", n);
    printf("The prime numbers are:");
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
            if (i % j == 0)
                printf(i + ",");
    }
}