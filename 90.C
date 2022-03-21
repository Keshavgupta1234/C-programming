#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int num1,num2,i,n;
printf("\n Keshav Gupta");
printf("\n enter the first number of range=");
scanf("%d",&num1);
printf("\n enter the second number of range=");
scanf("%d",&num2);
for
(i=num1;i<=num2;i++)
{
n=sqrt(i);
if(n*n==i)
{
printf("%d ",i);
}
}
getch();
}