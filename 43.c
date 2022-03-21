#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, ch;
    printf(" Keshav Gupta \n");
    printf(" ENTER VALUE OF A \n");
    scanf("%d", &a);
    printf(" enter the value of b \n");
    scanf("%d", &b);
    printf("Arithmatic Function \n");
    printf(" 1.add \n");
    printf(" 2.sub \n");
    printf(" 3.mul \n");
    printf(" 4.div \n");
    printf(" 5.Modulas \n");
    printf(" enter your choice \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf(" %d", c);
        break;
    case 2:
        c = a - b;
        printf(" %d", c);
        break;
        case 3:
        c = a * b;
        printf(" %d", c);
        break;
        case 4:
        c = a / b;
        printf(" %d", c);
        break;
        case 5:
        c = a % b;
        printf(" %d", c);
        break;
        default:
        printf("wrong input \n");
        
    }

    getch();
}