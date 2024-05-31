#include <stdio.h>

int main()
{
    int marks[10][5], roll[10], i, j, highest[5], secondHighest[5], highestRoll[5], secondHighestRoll[5];

    printf("Enter the roll numbers and marks obtained by 10 students in 5 subjects: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d: \n", i + 1);
        printf("Roll number: ");
        scanf("%d", &roll[i]);
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            if (i == 0 || marks[i][j] > highest[j])
            {
                secondHighest[j] = highest[j];
                secondHighestRoll[j] = highestRoll[j];
                highest[j] = marks[i][j];
                highestRoll[j] = roll[i];
            }
            else if (i == 0 || marks[i][j] > secondHighest[j])
            {
                secondHighest[j] = marks[i][j];
                secondHighestRoll[j] = roll[i];
            }
        }
    }

    for (j = 0; j < 5; j++)
    {
        printf("Subject %d: \n", j + 1);
        printf("Highest marks: %d, Roll number: %d\n", highest[j], highestRoll[j]);
        printf("Second highest marks: %d, Roll number: %d\n", secondHighest[j], secondHighestRoll[j]);
    }

    return 0;
}