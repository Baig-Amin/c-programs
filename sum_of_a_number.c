// 123 = 1 + 2 + 3 = 6
// 852 = 8 + 5 + 2 = 15

#include <stdio.h>
int main()
{
    int num, rem = 0, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }

    printf("Sum of %d is %d", temp, sum);
}