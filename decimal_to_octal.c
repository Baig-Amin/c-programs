// Convert Decimal value into Octal

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a ascii number: ");
    scanf("%d", &n);

    printf("Octal = %o", n);
    printf("\nHexa-decimal = %x", n);
    printf("\nHexa-decimal = %X", n);

    return 0;
}