#include<stdio.h>
#include<conio.h>
void main()
{
 int age,weight;
 printf("Keshav Gupta \n");
 printf("Enter the age: \n");
 scanf("%d",&age);
 printf("Enter the weight: \n");
 scanf("%d",&weight);
 do
 {
     if (age>=25|| weight>=50)
     {printf(" condition is false \n");}
     else
     {printf(" condition is true \n");}
 }
while(age<=25&&weight<=50);
    getch();
}