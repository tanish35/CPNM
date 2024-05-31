#include <stdio.h>

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);

    int i = 0;

    while (s[i] != '\0')
    {
        if ((i == 0 || s[i - 1] == ' ') && s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'e' && (s[i + 3] == '\0' || s[i + 3] == ' ' || s[i + 3] == '\n'))
        {
            s[i] = '0';
            s[i + 1] = '0';
            s[i + 2] = '0';
            i += 3;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '0')
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}
