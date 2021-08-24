#include <stdio.h>

int main()
{
    int n, floorLeft, feetAbove31Floor, feetFor30Floor, feetFor20Floor, feetFor10Floor, totalFeet, totalBrick;
    printf("Enter the number of floor: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Wrong Input!");
    }
    else if (n <= 10)
    {
        feetFor10Floor = n * 15;
        totalBrick = feetFor10Floor * 1000;
        printf("Totat Bricks for %d Floor = %d", n, totalBrick);
    }
    else if (n <= 20)
    {
        floorLeft = n - 10;
        feetFor20Floor = floorLeft * 12;
        feetFor10Floor = 10 * 15;
        totalFeet = feetFor10Floor + feetFor20Floor;
        totalBrick = totalFeet * 1000;
        printf("Totat Bricks for %d Floor = %d", n, totalBrick);
    }
    else if (n <= 30)
    {
        floorLeft = n - 20;
        feetFor30Floor = floorLeft * 11;
        feetFor20Floor = 10 * 12;
        feetFor10Floor = 10 * 15;
        totalFeet = feetFor10Floor + feetFor20Floor + feetFor30Floor;
        totalBrick = totalFeet * 1000;
        printf("Totat Bricks for %d Floor = %d", n, totalBrick);
    }
    else if (n >= 31)
    {
        floorLeft = n - 30;
        feetAbove31Floor = floorLeft * 10;
        feetFor30Floor = 10 * 11;
        feetFor20Floor = 10 * 12;
        feetFor10Floor = 10 * 15;
        totalFeet = feetFor10Floor + feetFor20Floor + feetFor30Floor + feetAbove31Floor;
        totalBrick = totalFeet * 1000;
        printf("Totat Bricks for %d Floor = %d", n, totalBrick);
    }

    return 0;
}