#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int sum = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == n)
    {
        printf("The number is an armstrong number");
    }
    else
    {
        printf("The number is not an armstrong number");
    }
    return 0;
}