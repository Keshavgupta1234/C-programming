#include<stdio.h>
#include<conio.h>
void main()
{ int a=0;
printf("Keshav Gupta \n");
printf("Enter the value of a:");
scanf("%d",&a);
while(a<10)
{
    printf("value of a is %d \n",a);
    if (a==5)
    break;
    a++;
}

    getch();
}