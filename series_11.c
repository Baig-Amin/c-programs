// 1^2 * 2^2 * 3^2 * 4^2 * 5^2 * ......... * n^2

#include <stdio.h>

int main()
{
    int n, i, result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * (i * i);
    }

    printf("%d", result);

    return 0;
}