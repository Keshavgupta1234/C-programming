#include<stdio.h>
#include<conio.h>
void main()
 {
int ary[5],i,max=0;
printf("Keshav Gupta \n"); 
printf ("enter the five elements of array: ");
 for(i=0; i<5; i++)
{
scanf("%d",&ary[i]);
}
 for(i=0; i<5; i++) 
{
if (max<ary[i])
{
max=ary[i];
} 
}

printf("maximum value is %d",max);
getch();
}