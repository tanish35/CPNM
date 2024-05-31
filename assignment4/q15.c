#include <stdio.h>

int main()
{
    char str[1000], prev = ' ';
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' || prev != ' ')
        {
            str[j] = str[i];
            j++;
        }
        prev = str[i];
        i++;
    }
    str[j] = '\0';

    printf("Formatted string: %s", str);

    return 0;
}