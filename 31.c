#include <conio.h>
#include <stdio.h>
void main()
{
    int i, n, r = 0;
    printf("Keshav Gupta \n");
    printf("Enter any number= \n");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            r = 1;
        break;
    }
    if (r == 0)
    {
        printf("prime number");
    }
    else
    {
        printf("Composite number");
    }

    getch();
}