#include <stdio.h>
#include <math.h>
int main()
{
    int l, b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);
    float r = sqrt(l * b) / 3.14;
    printf("The radius of the circle is: %f if the areas are equal\n", r);
    printf("The ratio of the perimeter of the rectangle and the circle is: %f if the areas are equal\n", (2 * (l + b)) / (2 * 3.14 * r));
    r = (l + b) / 3.14;
    printf("The radius of the circle is: %f if the perimeters are equal\n", r);
    printf("The ratio of the area of the rectangle and the circle is: %f if the perimeters are equal\n", (l * b) / (3.14 * r * r));
    return 0;
}