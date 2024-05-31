#include <stdio.h>

void length(char *str, int l)
{
    if (str[l] == '\0')
    {
        l--;
        printf("The length of the string is: %d\n", l);
        return;
    }
    l++;
    length(str, l);
}

int main()
{
    char s[1000];
    printf("Enter a string: ");
    fgets(s, 1000, stdin);
    length(s, 0);
    return 0;
}