#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    char s[100];
    // sprintf(s, "%d", n);
    // printf("Formatted string: %s\n", s);
    int i = 0;
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    while (reverse)
    {
        s[i] = reverse % 10 + '0';
        reverse /= 10;
        i++;
    }
    s[i] = '\0';
    printf("Formatted string: %s\n", s);
    return 0;
}