#include<stdio.h>
#include<conio.h>
void main()
{
 int n,reverse=0,row;
 printf("keshav gupta \n");
 printf("enter a number \n");
scanf("%d",&n);
while (n!=0)
{
    row=n%10;
reverse=reverse*10+row;
    n/=10;
}  
printf("reversed number:%d",reverse);
getch();
}