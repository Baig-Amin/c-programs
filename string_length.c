#include <stdio.h>
#include <string.h>

int main()
{
    int i, length = 0;
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("%d", length);

    return 0;
}