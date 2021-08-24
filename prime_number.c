// prime number list = 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67  71 73 79 83 89 97 total = 25

#include <stdio.h>

int main()
{

    int n, i, flag = 0;

    printf("Enter a number to check prime or not: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime or composite number.");
    }
    else
    {
        if (flag == 0)
        {
            printf("%d is a prime number.", n);
        }
        else
        {
            printf("%d is not a prime number.", n);
        }
    }

    return 0;
}