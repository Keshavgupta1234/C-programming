#include <stdio.h>
#include <conio.h>

float average(int a, int b, int c);
void main()
{
    int a, b, c;
    printf("Keshav Gupta \n");
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("enter the value of average is %f", average(a, b, c));
    getch();
}
float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}