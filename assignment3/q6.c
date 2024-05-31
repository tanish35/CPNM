#include <stdio.h>

int main()
{
    int marks[5][5], total[5] = {0}, netTotal = 0, highestTotal = 0;
    int i, j;

    printf("Enter the marks obtained by 5 students in 5 subjects: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        netTotal += total[i];
        if (total[i] > highestTotal)
            highestTotal = total[i];
    }

    printf("Total marks obtained by all the students: %d\n", netTotal);
    printf("Highest total marks: %d\n", highestTotal);

    return 0;
}