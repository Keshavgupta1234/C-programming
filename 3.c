#include <conio.h>
#include <stdio.h>
void main()
{
    int num1 = 10, num2 = 20, z;
    z = (num1 > num2);
    printf("Keshav Gupta \n ");
    z ? printf(" Display num1 \n") : printf(" Display num2 \n");
    printf(" sum=%d \n", num1 + num2);
    printf("sub=%d \n", num1 - num2);
    printf("Mul=%d \n", num1 * num2);
    printf(" div=%d \n", num1 / num2);
    printf(" avg=%d \n", (num1 + num2) / 2);
    getch();
}