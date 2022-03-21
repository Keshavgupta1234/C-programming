#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b);
void main()
{
    int a = 4, b = 3;
    printf("Keshav Gupta \n");
    printf("The value before call by reference is %d and %d \n ",a,b );
    swap(&a, &b);
    printf("The value after call by reference is %d and %d \n" ,a,b );
    getch();
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}