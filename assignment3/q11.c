#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double sum = 0.0, mean, variance = 0.0, stdDeviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double data[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%lf", &data[i]);
        sum += data[i];
    }

    mean = sum / n;

    for (i = 0; i < n; ++i)
    {
        variance += pow(data[i] - mean, 2);
    }

    variance = variance / n;
    stdDeviation = sqrt(variance);

    printf("Standard Deviation = %lf", stdDeviation);

    return 0;
}