#include <stdio.h>

int main()
{

    char s[100];
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    int i = 0;
    int c = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (s[i + 1] == 'A' || s[i + 1] == 'E' || s[i + 1] == 'I' || s[i + 1] == 'O' || s[i + 1] == 'U' || s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
            {
                c++;
            }
        }
        i++;
    }
    printf("Number of consecutive vowels: %d", c);
}