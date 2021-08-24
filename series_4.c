// sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + ............ +n(th position)
// n=3, sum=10

#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter the nth position: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
    }
    printf("%d", sum);

    return 0;
}