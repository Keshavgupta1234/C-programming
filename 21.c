#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf(" Keshav Gupta \n");
    printf(" enter a number=");
    scanf("%d\n", &a);
    if (a >= 100 & a <= 1000)
    {
        printf(" this number is between 100 and 1000", a);
    }
    else
    {
        printf(" this number is not between 100 and 1000 ", a); 
    }

    getch();
}