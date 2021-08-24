// Sum of 1 + 2 + 3 + 4 +.........+n = n(n+1)/2

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the ending number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d = ", i);
        }
        else
        {
            printf("%d + ", i);
        }
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}