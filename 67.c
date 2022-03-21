#include<stdio.h> 
#include<conio.h>
void main()
{ 
int num1, num2;
printf ("Keshav Gupta\n");
printf("Enter the 1st number");
scanf("%d",&num1); 
printf("Enter the 2nd number");
scanf("%d",&num2);
for (num1; num2<=num1; num1--)
printf("\t%d", num1);
getch();
}