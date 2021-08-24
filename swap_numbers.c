// Swaping two number with and without temporary variable
#include <stdio.h>

int main()
{
    int num1, num2, temp, a, b;

    printf("Enter a two numbers: ");
    scanf("%d%d", &num1, &num2);

    a = num1;
    b = num2;

    //with temporary variable
    printf("With temporary variable");
    printf("\nBefore Swapping num1 = %d and num2 = %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter Swapping num1 = %d and num2 = %d", num1, num2);

    printf("\n\nWithout temporary variable");
    printf("\nBefore Swapping num1 = %d and num2 = %d", a, b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("\nAfter Swapping num1 = %d and num2 = %d", a, b);

    return 0;
}