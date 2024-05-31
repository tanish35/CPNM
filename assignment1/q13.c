#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total population: ");
    scanf("%d", &n);
    printf("Percentage of Illiterate men are: %d\n", (17 * n) / 100);
    printf("Percentage of Illiterate women are: %d\n", (35 * n) / 100);
    printf("Total percentage of Illiterate people are: %d\n", (52 * n) / 100);
    return 0;
}