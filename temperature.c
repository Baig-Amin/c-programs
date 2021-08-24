#include <stdio.h>

int main()
{
    int option;
    float c, f;

    printf("Press 1 for Celsius to Fahrenheit.\nPress 2 for Fahrenheit to Celsius.\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Enter the Celsius value: ");
        scanf("%f", &c);

        f = (c * 9 / 5) + 32;

        printf("%.2f celsious = %.2f Fahrenheit", c, f);
        break;

    case 2:
        printf("Enter the Fahrenheit value: ");
        scanf("%f", &f);

        c = (f - 32) * 5 / 9;

        printf("%.2f Fahrenheit = %.2f celsious", f, c);
        break;

    default:
        printf("Wrong input.");
        break;
    }

    return 0;
}
