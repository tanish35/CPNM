#include <stdio.h>

int main()
{
    char s[1000];
    printf("Enter a string: ");
    fgets(s, 1000, stdin);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            printf("|");
        }
        else
        {
            printf("%c", s[i]);
        }
        i++;
    }
}