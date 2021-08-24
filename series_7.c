// 1*1 + 2*3 + 3*5 + 4*7 + 5*9 + ......... + n1*n2(odd number)

#include <stdio.h>

int main()
{
    int n1, n2, a = 1, b = 1, sum = 0;

    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);

    while (a <= n1 && b <= n2)
    {
        sum = sum + (a * b);
        a++;
        b = b + 2;
    }

    printf("%d", sum);

    return 0;
}