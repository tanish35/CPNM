#include <stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
        {
            printf("The year is a leap year");
            return 0;
        }
    }
    else if (n % 4 == 0)
    {
        printf("The year is a leap year");
        return 0;
    }
    printf("The year is not a leap year");
}