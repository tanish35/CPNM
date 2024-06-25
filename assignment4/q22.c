#include <stdio.h>

void swapStrings(char arr[][100], int i, int j)
{
    char temp;
    int k = 0;
    while (arr[i][k] != '\0' || arr[j][k] != '\0')
    {
        temp = arr[i][k];
        arr[i][k] = arr[j][k];
        arr[j][k] = temp;
        k++;
    }
}

int compareStrings(const char *str1, const char *str2)
{
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}

void bubbleSort(char arr[][100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareStrings(arr[j], arr[j + 1]) > 0)
            {
                swapStrings(arr, j, j + 1);
            }
        }
    }
}

int main()
{
    char strings[10][100];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], 100, stdin);
        int len = 0;
        while (strings[i][len] != '\n' && strings[i][len] != '\0')
            len++;
        strings[i][len] = '\0';
    }

    bubbleSort(strings, n);

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}