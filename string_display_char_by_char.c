#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
}