#include <stdio.h>

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int i = 0;
    int k = 1;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            k++;
        }
        i++;
    }
    printf("The number of words are %d", k);
    return 0;
}