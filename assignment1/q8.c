#include <stdio.h>
int main()
{
    int f;
    printf("Enter the temperature ");
    scanf("%d", &f);
    float cel = (float)(f - 32) * 5.0 / 9.0;
    printf("The temperature in celsius is %f \n ", cel);
}
