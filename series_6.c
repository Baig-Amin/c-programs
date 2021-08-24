// 1*2 + 2*3 + 3*4 + 4*5 + 5*6 + ......... + n1*n2

#include <stdio.h>

int main()
{
    int n1, n2, a = 1, b = 2, sum = 0;

    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);

    while (a <= n1 && b <= n2)
    {
        sum = sum + (a * b);
        a++;
        b++;
    }

    printf("%d", sum);

    return 0;
}