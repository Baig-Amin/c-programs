// 0! = 1
// 1! = 1
// 2! = 2 * 1 = 2
// 3! = 3 * 2 * 1 = 6
// 4! = 4 * 3 * 2 * 1 = 24
// 5! = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>

int main()
{
    int n, i, fact = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Factorial of %d is %d", n, fact);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is %d", n, fact);
    }

    return 0;
}