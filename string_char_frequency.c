#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, x, count[26] = {0};

    printf("\nEnter String:");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            x = str[i] - 'a';
            count[x]++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c occurs %d times\n", i + 'a', count[i]);
    }
}