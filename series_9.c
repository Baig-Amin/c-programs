// 1*1*2 + 2*3*4 + 3*5*6 + ......... + n1*n2(odd)*n3(even)

#include <stdio.h>

int main()
{
    int n1, n2, n3, a = 1, b = 1, c = 2, sum = 0;

    printf("Enter three number: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    while (a <= n1 && b <= n2 && c <= n3)
    {
        sum = sum + (a * b * c);
        a++;
        b = b + 2;
        c = c + 2;
    }

    printf("%d", sum);

    return 0;
}