#include <stdio.h>
int main()
{
    int n, search, i, a[100], first, last, middle;

    printf("Enter how many number you want in array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (a[middle] == search)
        {
            printf("Found at location %d", middle + 1);
            break;
        }
        else if (a[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            middle = first - 1;
        }
        middle = (first + last) / 2;
    }

    if (first > last)
    {
        printf("Not Found");
    }

    return 0;
}