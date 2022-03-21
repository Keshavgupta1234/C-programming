#include <stdio.h>
#include <conio.h>
int prime(int n);
void main()
{
    int n, flag;
    printf("Keshav Gupta \n");
    printf("Enter a integer \n");
    scanf("%d", &n);
    flag = prime(n);
    if (flag == 1)
        printf("%d is not a prime number", n);
    else
        printf("%d is  a prime number", n);
    getch();
}
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; ++i)
        ;
    {
        if (n % i == 0)
            getch();
    }
    getch();
}