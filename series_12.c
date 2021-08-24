// 1 + 1/2 + 1/3 + 1/4 + 1/5 + ......... + 1/n

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (i / 2);
    }

    printf("%d", sum);

    return 0;
}