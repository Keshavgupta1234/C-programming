#include<stdio.h>
#include<conio.h>
void main ()
{ int a;
printf("Keshav Gupta \n");
printf(" Enter the value of a \n");
scanf("%d",&a);
if (a%2==0)
goto even;
else
goto odd;
even:
{
    printf(" number is even \n");
}
return;
odd:
{
    printf(" number is odd");
}

    getch();
}