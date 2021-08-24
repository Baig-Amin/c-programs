// 1*2 + 2*4 + 3*6 + 4*8 + 5*10 + ......... + n1*n2(even number)

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
        b = b + 2;
    }

    printf("%d", sum);

    return 0;
}