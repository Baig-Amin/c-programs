//145 = 1! + 4! + 5! = 145
// Strong number between 1 - 1000 = 1, 2, 145

#include <stdio.h>
int main()
{
    int i, num, rem = 0, sum = 0, temp, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        fact = 1;

        rem = num % 10;

        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if (sum == temp)
    {
        printf("%d is a strong number", sum);
    }
    else
    {
        printf("%d is not a strong number", sum);
    }

    return 0;
}