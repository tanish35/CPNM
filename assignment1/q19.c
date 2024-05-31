#include <stdio.h>

int main()
{
    int a1, a2, a3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 + a2 + a3 == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    int s1, s2, s3;
    printf("\nEnter the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}