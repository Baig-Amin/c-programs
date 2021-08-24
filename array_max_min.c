#include <stdio.h>
int main()
{
    int n, i, a[100], max, min;

    printf("Enter how many number you want in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("Max = %d \n", max);

    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("Min = %d \n", min);
}