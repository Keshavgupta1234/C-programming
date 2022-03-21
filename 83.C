#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n NAME=ARYAN THAKUR");
printf("\n enter the value of a=");
scanf("%d",&a);
if(a%2==0)
goto even;
else
goto odd;
even:
printf("\n enetered no. is even");
return;
odd:
printf("\n entered no. is odd");
getch();
}