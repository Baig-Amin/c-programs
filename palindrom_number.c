// 11211 = 11211

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

    if (temp == rev)
    {
        printf("%d is a palindrom number.", temp);
    }
    else
    {
        printf("%d is not a palindrom number.", temp);
    }
}