#include<stdio.h> 
#include<conio.h>
int main() 
{
int num,n;

printf ("Keshav Gupta \n");
printf(" \n enter the num= "); 
scanf("\n %d",&num);
printf("\n number:" );
for (n=1;n<=num; n++) printf("\n %d",n);
printf(" square: "); 
for (n=1;n<=num; n++)
{
printf("\n %d",n*n); 
}
getch();
}