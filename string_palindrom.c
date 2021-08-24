#include <stdio.h>
#include <string.h>

int main()
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

    if (strcmp(str1, str2) == 0)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not palindrom");
    }

    return 0;
}
