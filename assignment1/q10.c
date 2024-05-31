#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total money ");
    scanf("%d", &n);
    int a, b, c;
    a = n / 100;
    n = n - a * 100;
    b = n / 50;
    n = n - b * 50;
    c = n / 10;
    n = n - c * 10;
    printf("The number of 100 notes to give are %d\n", a);
    printf("The number of 50 notes to give are %d\n", b);
    printf("The number of 10 notes to give are %d\n", c);
}
