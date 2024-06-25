#include <stdio.h>
#include <ctype.h>

int countWords(const char *str)
{
    int state = 0, wc = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = 0;
        else if (state == 0)
        {
            state = 1;
            ++wc;
        }
        ++str;
    }
    return wc;
}

int findOccurrences(const char str[], const char word[])
{
    int count = 0, i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; word[j] != '\0'; j++)
        {
            if (str[i + j] != word[j])
            {
                break;
            }
        }
        if (word[j] == '\0')
        {
            count++;
        }
    }
    return count;
}

void printReverse(const char *str)
{
    int len = 0;
    const char *s = str;
    while (*s++)
        ++len;
    while (len--)
        putchar(*(str + len));
    putchar('\n');
}

void countVowelsConsonants(const char *str, int *vowels, int *consonants)
{
    *vowels = *consonants = 0;
    while (*str)
    {
        if (isalpha((unsigned char)*str))
        {
            switch (tolower((unsigned char)*str))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++(*vowels);
                break;
            default:
                ++(*consonants);
            }
        }
        ++str;
    }
}

char mostFrequentChar(const char *str)
{
    int count[256] = {0};
    while (*str)
    {
        count[(unsigned char)*str]++;
        str++;
    }
    int max = 0;
    char result = '\0';
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = (char)i;
        }
    }
    return result;
}

int isSubstringPresent(const char str[], const char substr[])
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; substr[j] != '\0'; j++)
        {
            if (str[i + j] != substr[j])
            {
                break;
            }
        }
        if (substr[j] == '\0')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char str[] = "The boy is a boy";
    char word[] = "boy";
    char substr[] = "program";
    int vowels, consonants;

    printf("Total words: %d\n", countWords(str));
    printf("Occurrences of '%s': %d\n", word, findOccurrences(str, word));
    printf("String in reverse: ");
    printReverse(str);
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    printf("Most frequent character: '%c'\n", mostFrequentChar(str));
    printf("Is '%s' present? %s\n", substr, isSubstringPresent(str, substr) ? "Yes" : "No");

    return 0;
}