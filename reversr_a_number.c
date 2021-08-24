// 123 reverse 321
#include <stdio.h>
int main()
{
    int num, rem = 0, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    printf("Reverse number of %d is %d", temp, rev);
}