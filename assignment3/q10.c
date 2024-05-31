#include <stdio.h>

int main()
{
    int num, i, j, temp, arr[4], asc, desc, diff;

    printf("Enter a four-digit number, using at least two different digits: ");
    scanf("%d", &num);

    while (1)
    {
	int temp1=num;
        for (i = 3; i >= 0; i--)
        {
            arr[i] = num % 10;
            num /= 10;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (arr[j] > arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        desc = 0;
        for (i = 0; i < 4; i++)
        {
            desc = desc * 10 + arr[i];
        }
        for (i = 0; i < 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[3 - i];
            arr[3 - i] = temp;
        }
        asc = 0;
        for (i = 0; i < 4; i++)
        {
            asc = asc * 10 + arr[i];
        }
        diff = desc - asc;
        if (temp1 == diff)
        {
            printf("The final number is %d\n", diff);
            break;
        }
        num = diff;

    }

    return 0;
}
