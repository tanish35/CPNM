#include <stdio.h>

int main()
{
    char date[11];
    int day, month, year;
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12)
    {
        printf("%d-%s-%d\n", day, months[month - 1], year);
    }
    else
    {
        printf("Invalid month entered.\n");
    }

    return 0;
}