#include<stdio.h>
#include<conio.h>
void main ()
{ 
    int num,c=0,i=1;
    printf("Keshav Gupta \n");
    printf("enter the number=");
    scanf("%d",&num);
    do
    { if (num%i==0)
    {c++; }
  i++;
    }
    while (i<=num);
    if (c==2) 
    printf("nmber is prime");
    else
    printf("nmber is not prime");
    getch();
}