#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }

    printf("The factorial of the number is %d\n", fact);
}
