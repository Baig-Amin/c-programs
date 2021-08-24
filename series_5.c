// sum of 1-2+3-4+5-6+7-8+..........-n(th position) / (1+3+5+7+9+.....)-(2+4+6+8+10+....)

#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0, sum = 0;

    printf("Enter the ending number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }

        sum = odd - even;
    }

    printf("%d", sum);

    return 0;
}