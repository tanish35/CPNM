#include <stdio.h>

int main()
{
    int c, f;
    printf("Enter the student's class and number of subjects failed ");
    scanf("%d %d", &c, &f);
    switch (c)
    {
    case 1:
        if (f > 3)
        {
            printf("No grace marks");
        }
        else
        {
            printf("5 grace marks per subject");
        }
        break;
    case 2:
        if (f > 2)
        {
            printf("No grace marks");
        }
        else
        {
            printf("4 grace marks per subject");
        }
        break;
    case 3:
        if (f > 1)
        {
            printf("No grace marks");
        }
        else
        {
            printf("5 grace marks per subject");
        }
        break;
    }
    return 0;
}