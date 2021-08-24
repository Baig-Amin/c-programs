#include <stdio.h>
#include <string.h>

int main()
{
    char str1[25], str2[25], temp[25];

    printf("\nEnter String:");
    gets(str1);

    printf("\nEnter another String:");
    gets(str2);

    printf("\nBefore swapping str1 = %s str2 = %s ", str1, str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\nAfter swapping str1 = %s str2 = %s ", str1, str2);
}