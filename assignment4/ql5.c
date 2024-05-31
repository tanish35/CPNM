#include <stdio.h>

void print_binary(int num)
{
    if (num > 1)
    {
        print_binary(num / 2);
    }
    printf("%d", num % 2);
}

int main()
{
    int choice;
    int num;

    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Decimal\n");
    printf("4. Hexadecimal\n");
    printf("Enter the number system of the input: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    switch (choice)
    {
    case 1:
        scanf("%d", &num);
        printf("Octal: %o\n", num);
        printf("Decimal: %d\n", num);
        printf("Hexadecimal: %x\n", num);
        break;
    case 2:
        scanf("%o", &num);
        printf("Binary: ");
        print_binary(num);
        printf("\nDecimal: %d\n", num);
        printf("Hexadecimal: %x\n", num);
        break;
    case 3:
        scanf("%d", &num);
        printf("Binary: ");
        print_binary(num);
        printf("\nOctal: %o\n", num);
        printf("Hexadecimal: %x\n", num);
        break;
    case 4:
        scanf("%x", &num);
        printf("Binary: ");
        print_binary(num);
        printf("\nOctal: %o\n", num);
        printf("Decimal: %d\n", num);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}