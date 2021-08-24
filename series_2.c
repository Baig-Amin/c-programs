// Sum of 1 + 3 + 5 + 7 + 9 +..........+ n
// Sum of 2 + 4 + 6 + 8 + 10 +..........+ n

#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0, temp;

    printf("Enter the ending number: ");
    scanf("%d", &n);

    temp = n;

    if (n % 2 != 0)
    {
        n = n - 1;
    }

    for (i = 2; i <= n; i = i + 2)
    {
        if (i != n)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d = ", i);
        }
        even = even + i;
    }
    printf("%d\n", even);

    n = temp;

    if (n % 2 == 0)
    {
        n = n - 1;
    }

    for (i = 1; i <= n; i = i + 2)
    {
        if (i != n)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d = ", i);
        }
        odd = odd + i;
    }
    printf("%d", odd);

    return 0;
}