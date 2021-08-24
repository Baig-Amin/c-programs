// 2 1 3 4 7 11 18.........n

#include <stdio.h>
int main()
{
    int n, i, first = 2, second = 1, lucas, count = 2;

    printf("Enter a number of term: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (count <= 2 && count > 0)
        {
            lucas = count;
        }
        else
        {
            lucas = first + second;
            first = second;
            second = lucas;
        }

        printf("%d ", lucas);
        count--;
    }
}