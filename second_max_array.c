/* C Program to find Second largest Number in an Array */

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[50], i, Size;
    int first, second;

    printf("\n Please Enter the Number of elements in an array  :  ");
    scanf("%d", &Size);

    printf("\n Please Enter %d elements of an Array \n", Size);
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MIN;

    for (i = 0; i < Size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    printf("\n The Largest Number in this Array =  %d", first);
    printf("\n The Second Largest Number in this Array =  %d", second);

    return 0;
}