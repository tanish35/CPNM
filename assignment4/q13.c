#include <stdio.h>

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i -= 2;
    for (int j = 0; j <= i / 2; j++)
    {
        if (s[j] != s[i - j])
        {
            printf("Its not a palindrome");
            return 0;
        }
    }
    printf("Its a palindrome");
    return 0;
}