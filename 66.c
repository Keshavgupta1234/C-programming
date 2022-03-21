#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10;
    printf("Keshav Gupta \n");
    do
    {
        if (a == 15)
        {
            a = a + 1;
            continue;
        }
        printf("value of a:%d \n", a);
        a++;
    } while (a < 19);
    getch();
}