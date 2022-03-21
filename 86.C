#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=1;
printf("\n Keshav Gupta");
printf("\n enter a number=");
scanf("%d",&n);
do
{
f=f*n;
n--;
}
while(n>0);
printf("\n factorial of no is=%d",f);
getch();
}