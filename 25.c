#include <conio.h>
#include <stdio.h>
void main()
{ int a,b,c,d;
    printf(" Keshav Gupta \n");
    printf(" Enter the First number \n");
    scanf("%d \n", &a);
    a++;
    printf(" value after post increment=%d \n", a);
    printf("Enter second Number \n");
    scanf("%d \n", &b);
    b--;
    printf(" value after post decrement=%d \n", b);
    printf("Enter third Number \n");
    scanf("%d \n", &c);
    ++c;
    printf(" value after pre increment=%d \n", c);
    printf("Enter fourth Number \n");
    scanf("%d \n", &d);
    --d;
    printf(" value after pre decrement=%d", d);
    getch();
}