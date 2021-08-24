// 0 1 1 2 3 5 8 13 21 .......... n(th term)

#include <stdio.h>
int main()
{
    int n, i, first = 0, second = 1, fibo, count = 0;

    printf("Enter a number of term: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        count++;
    }
}