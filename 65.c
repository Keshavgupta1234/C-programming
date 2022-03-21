#include <stdio.h>
#include <conio.h>
void main()
{
    int n, j, i;
    printf("Keshav Gupta \n");
    printf("enter a number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", (i * j));
        }
        printf("\n");
    }

    getch();
}