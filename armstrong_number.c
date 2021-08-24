// 370 = (3*3*3) + (7*7*7) + (0*0*0) = 370
// In the range 0 to 999 there exists six Armstrong numbers = 0, 1, 153, 370, 371, 407
#include <stdio.h>

int main()
{

    int n, temp, sum = 0, rem = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + (rem * rem * rem);
    }

    if (temp == sum)
    {
        printf("%d is an armstrong number.", temp);
    }
    else
    {
        printf("%d is not an armstrong number.", temp);
    }

    return 0;
}