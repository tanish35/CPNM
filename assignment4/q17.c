#include <stdio.h>

int main()
{
    char s[5][100];
    printf("Enter the name of students and their marks: \n");
    int marks[5][5];
    for (int i = 0; i < 5; i++)
    {
        printf("Name: ");
        scanf("%s", s[i]);
        printf("Marks: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    int total[5][2] = {0};

    for (int i = 0; i < 5; i++)
    {
        total[i][1] = i;
        for (int j = 0; j < 5; j++)
        {
            total[i][0] += marks[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (total[j][0] < total[j + 1][0])
            {
                int temp = total[j][0];
                total[j][0] = total[j + 1][0];
                total[j + 1][0] = temp;
                temp = total[j][1];
                total[j][1] = total[j + 1][1];
                total[j + 1][1] = temp;
            }
        }
    }

    printf("The students in merit order of total marks are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Marks obtained by %s is %d\n", s[total[i][1]], total[i][0]);
    }
    return 0;
}
