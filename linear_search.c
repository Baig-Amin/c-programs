#include <stdio.h>
int main()
{
    int n, i, a[100], value, pos = -1;

    printf("Enter how many number you want in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (value == a[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Found at position %d ", pos);
    }

    return 0;
}