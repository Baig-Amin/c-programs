#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, vowel = 0, con = 0, word = 0, digit = 0;

    printf("Enter String:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            con++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch >= ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    word++;

    printf("Vowel = %d times\nConsonant = %d times\nDigit = %d times\nWords = %d \n", vowel, con, digit, word);
}