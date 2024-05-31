#include <stdio.h>
// #include <stdlib.h>
int main()
{
    // char *s=(char *)malloc(100*sizeof(char));
    char s[100];
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        printf("%c", s[0] - 32);
    }
    else
    {
        printf("%c", s[0]);
    }
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                printf("%c", s[i + 1] - 32);
            }
            else
            {
                printf("%c", s[i + 1]);
            }
        }
        i++;
    }
}