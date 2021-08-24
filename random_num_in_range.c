#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower, upper, count;

    printf("Enter a lowar value of range: ");
    scanf("%d", &lower);

    printf("Enter a Upper value of range: ");
    scanf("%d", &upper);

    srand(time(0));

    printf("The random numbers are: ");
    for (int i = 0; i < (upper - lower); i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }

    return 0;
}