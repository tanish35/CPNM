#include <stdio.h>

int main()
{
    char date1[11], date2[11];
    int day1, month1, year1;
    int day2, month2, year2;
    int result;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if (year1 > year2)
    {
        result = 1;
    }
    else if (year1 < year2)
    {
        result = -1;
    }
    else
    {
        if (month1 > month2)
        {
            result = 1;
        }
        else if (month1 < month2)
        {
            result = -1;
        }
        else
        {
            if (day1 > day2)
            {
                result = 1;
            }
            else if (day1 < day2)
            {
                result = -1;
            }
            else
            {

                result = 0;
            }
        }
    }

    printf("Result: %d\n", result);

    return 0;
}