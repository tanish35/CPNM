#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("The sum of the number is %d\n", (n * (n + 1)) / 2);
}
