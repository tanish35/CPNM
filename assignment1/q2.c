#include <stdio.h>
int main()
{
    // const pi=3.14;
    float l, b, r;
    printf("enter the values of length, breadth and radius: \n");
    scanf("%f%f%f", &l, &b, &r);
    float pr = 2 * (l + b);
    float ar = l * b;
    float pc = 2 * 3.14 * r;
    float ac = 3.14 * r * r;
    printf("the perimeter of rectangle %f\n", pr);
    printf("the area of rectangle %f \n", ar);
    printf("the area of circle %f\n", ac);
    printf("the circumference of circle %f\n", pc);
    return 0;
}
