#include <stdio.h>
#include <conio.h>
void main()
{
    int num, c, r, arm = 0;
    printf("Keshav Gupta \n");

    printf("Enter the number: ");
    scanf("%d", &num);
    c = num;
    while (num > 0)
    {
        r = num % 10;   

        arm = arm + (r * r * r);
        num = num / 10;
    }
    if (c == arm)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong ");
    }

    getch();
}