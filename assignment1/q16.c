#include <stdio.h>

int main()
{
    char s[6];
    printf("Enter a 5 letter word ");
    scanf("%5s", s);
    for (int i = 0; i < 5; i++)
    {
        s[i] = s[i] - 30;
    }
    printf("The word after encryption is %s", s);
    return 0;
}