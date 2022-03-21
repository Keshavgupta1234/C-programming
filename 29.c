#include <stdio.h>
#include <conio.h>
void main()
{

    int Maths, Eng, Hindi, Eco, Bst, e;
    int g;
    printf("Keshav Gupta\n \n");
    printf(" Enter the value of Maths ");
    scanf("%d", &Maths);
    printf("Enter the Value of Eng ");
    scanf("%d", &Eng);
    printf("Enter the Value of Hindi ");
    scanf("%d", &Hindi);
    printf("Enter the Value of Eco ");
    scanf("%d", &Eco);
    printf("Enter the Value of Bst ");
    scanf("%d", &Bst);
    e = Maths + Eng + Hindi + Eco + Bst;
    printf("%d\n", e);
    g = e / 5;
    printf("percentage %d \n", g);
    getch();
}