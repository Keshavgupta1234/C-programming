#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    struct student

    {
        int rollno;
        char name[30];
    };
    struct student st[10];
    int i;
    printf("student info \n");
    for (i=0;i<=10;i++)
    {
        printf("enter the st roll no \n");
        scanf("%d", &st[i].rollno);
        printf("enter the name \n");
        scanf("%s", &st[i].name);
    }

    for (i = 0; i <= 10; i++)
        ;
    printf("%d", st[i].rollno);
    printf("%d", st[i].name);
}
getch();
}