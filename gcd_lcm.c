// 60 = 2 * 2 * 3 * 5
// 24 = 2 * 2 * 2 * 3
// GCD common element: 2 * 2 * 3 = 12
// LCM = (60 * 24) / 12 = 120

#include <stdio.h>
int main()
{
    int i, num1, num2, temp1, temp2, rem = 0, reg = 0;

    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    temp1 = num1;
    temp2 = num2;

    while (temp2 != 0)
    {
        rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }

    reg = (num1 * num2) / temp1;

    printf("GCD = %d", temp1);
    printf("\nLCM = %d", reg);
}