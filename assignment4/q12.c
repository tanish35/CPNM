#include <stdio.h>

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int i = 0;
    int num = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
        }
        i++;
    }
    printf("%d", num);
    return 0;
}