// sum of = 1 + 3 + 9 + 27 + 81 +.......+n(th term)

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, sum = 0, result, temp;

    printf("Enter the nth position: ");
    scanf("%d", &n);

    temp = n - 1;

    result = pow(3, temp);

    for (i = 1; i <= result; i = i * 3)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nSum = %d ", sum);

    return 0;
}