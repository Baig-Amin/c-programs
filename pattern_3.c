//COLUMN(j) same

// ****    1234     abcd      1010
// ***     123      abc       101
// **      12       ab        10
// *       1        a         1

#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the row number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j); //number
            // printf("*");  //star
            // printf("%d", j%2); //binary number
            // printf("%c", j + 64); //Upercase alphabet
            // printf("%c", j + 96); //Lowercase
        }
        printf("\n");
    }
}