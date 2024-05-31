#include <stdio.h>

int main()
{
    int s;
    printf("Enter the time in seconds: ");
    scanf("%d", &s);
    int h = s / 3600;
    s = s - h * 3600;
    int m = s / 60;
    s = s - m * 60;
    printf("The time is %d hours, %d minutes and %d seconds", h, m, s);
    return 0;
}