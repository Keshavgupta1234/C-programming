#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Keshav Gupta \n");
    int a = 0;
    void sqr(int);
    for (a = 1; a <= 5; a++)
        sqr(a);
    getch();
}
void sqr(int b)
{
    printf("Square of  number %d\n", b * b);
}