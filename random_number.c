#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("Random Number: %d \n", rand() % 100 + 1);
    }
}