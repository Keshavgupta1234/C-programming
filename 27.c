#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, greatest;
    printf(" Keshav Gupta \n");
    printf(" Enter Three Number \n");
    scanf(" %d%d%d \n", &a, &b, &c);
    {
        if (a > c)
            if (a > b)
                printf(" This number is greater =%d\n", a);
            else
                printf(" This number is greater =%d\n", c);
    }
    {
        if (b > c)
            printf(" This number is greater =%d\n", b);
        else
            printf(" This number is greater =%d\n", c);
    }
    getch();
}
