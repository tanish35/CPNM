#include <stdio.h>

int main()
{
    int h,t;
float c;
    printf("Enter the hardness, carbon content and tensile strength of the steel: ");
    scanf("%d %f %d", &h, &c, &t);
    if (h > 50 && c < 0.7 && t > 5600)
    {
        printf("The grade of the steel is 10");
    }
    else if (h > 50 && c < 0.7)
    {
        printf("The grade of the steel is 9");
    }
    else if (c < 0.7 && t > 5600)
    {
        printf("The grade of the steel is 8");
    }
    else if (h > 50 && t > 5600)
    {
        printf("The grade of the steel is 7");
    }
    else if (h > 50 || c < 0.7 || t > 5600)
    {
        printf("The grade of the steel is 6");
    }
    else
    {
        printf("The grade of the steel is 5");
    }
    return 0;
}
