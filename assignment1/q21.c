#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r;
    printf("Enter the coordinates of the center of the circle: ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    int x1, y1;
    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x1, &y1);
    if (sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)) < r)
    {
        printf("The point lies inside the circle");
    }
    else if (sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)) == r)
    {
        printf("The point lies on the circle");
    }
    else
    {
        printf("The point lies outside the circle");
    }
    return 0;
}