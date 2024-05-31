#include <stdio.h>

int main()
{
    char s[6];
    printf("Enter the encoded word ");
    scanf("%5s", s);
    for (int i = 0; i < 5; i++)
    {
        s[i] = s[i] + 30;
    }
    printf("The word after decryption is %s", s);
    return 0;
}
