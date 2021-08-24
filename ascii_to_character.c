// Convert Ascii value into Character

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a ascii number: ");
    scanf("%d", &n);

    char c = n;

    printf("%c", c);

    return 0;
}