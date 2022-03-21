#include <stdio.h>
#include <conio.h>
void main()
{
    int i, factorial = 1, number;
    printf("keshav Gupta \n");
    printf("please enter number \n");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial of %d=%2d\n", number, factorial);

    getch();
}