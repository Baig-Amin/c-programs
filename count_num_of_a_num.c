// 95147 = 5
// 365789 = 6

#include <stdio.h>
int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("Number of degit = %d", count);
}