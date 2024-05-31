#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d%d", &a, &b);
    c = b;
    b = a;
    a = c;
    printf("the value of a is %d and b is %d\n", a, b);
    return 0;
}
