#include <stdio.h>

void main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], diff[3][3], product[3][3];
    int i, j, k, choice;

    printf("Enter elements of first 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    while (1)
    {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            printf("\nSum of matrices: \n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    diff[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            printf("\nDifference of matrices: \n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d ", diff[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    product[i][j] = 0;
                    for (k = 0; k < 3; k++)
                    {
                        product[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }
            printf("\nProduct of matrices: \n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d ", product[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            return;

        default:
            printf("\nInvalid choice.\n");
        }
    }
}