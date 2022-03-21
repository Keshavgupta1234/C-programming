#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Keshav Gupta \n \n");
    printf("enter age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("eligible");
    }
    else
    {
        printf("you are not eligible");
    }
    getch();
}
