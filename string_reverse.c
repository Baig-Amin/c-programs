#include <stdio.h>
#include <string.h>

void main(void)
{
    char str1[25], str2[25];
    int i = 0, j = 0, len;

    printf("\nEnter String:");
    gets(str1);

    len = strlen(str1);

    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("%s", str2);
}