#include <stdio.h>
int main()
{
    int n, i, a[100], b[100];

    printf("Enter how many number you want in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}