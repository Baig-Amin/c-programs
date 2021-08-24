//ROW(i) same

// ****    4444     dddd      0000
// ***     333      ccc       111
// **      22       bb        00
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
            printf("%d", i); //number
            // printf("*");  //star
            // printf("%d", i%2); //binary number
            // printf("%c", i + 64); //Upercase alphabet
            // printf("%c", i + 96); //Lowercase
        }
        printf("\n");
    }
}