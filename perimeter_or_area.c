#include <stdio.h>
#include <math.h>
void rectangle();
void circle();

void rectangle()
{
    int l, b;
    float area, perimeter;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
}
void circle()
{
    float area, perimeter;
    int r;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", perimeter);
}

int main()
{
    int n;
    printf("1.Rectangle");
    printf("2.Circle");
    printf("enter a number");
    scanf("%d", n);

    switch (n)
    {
    case 1:
        rectangle();
        break;
    case 2:
        circle();
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}