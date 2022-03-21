#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, greatest;
    printf(" Keshav Gupta \n");
    printf(" Enter Three Number \n");
    scanf(" %d%d%d \n", &a, &b, &c);
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The Greatest Number is =%d \n", greatest);
    getch();
}