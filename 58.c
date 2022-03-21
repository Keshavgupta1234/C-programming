#include <stdio.h>
#include <conio.h>
void main()
{
    int line, row, col, value = 0;
    printf("Keshav Gupta \n");
    printf(" Enter the number of lines");
    scanf("%d", &line);
    for (row = 1; row <= line; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", value);
            value++;
        }
        printf("\n");
    }

    getch();
}