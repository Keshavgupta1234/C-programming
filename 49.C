#include<stdio.h>
int main()
{
int a=50;
int *j=&a;
int **k=&j;
printf("Keshav Gupta\n");
printf("\n the value of a is %d",a);
printf("\n the value of a is %d",*j);
printf("\n the value of a is %d",**k);
printf("\n the address of a is %u",&a);
printf("\n the address of a is %u", j);
printf("\n the address of a is %u",&j);
printf("\n the value of a is %u",*(&j));
printf("\n the address of a is %u",&k);
printf("\n the value of a is %d",*(&k));
getchar();

}



