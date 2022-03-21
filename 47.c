#include<stdio.h>
int main()
{
    int *ptr,i;
    printf("Keshav Gupta\n");
    ptr=(int *)malloc(3*sizeof(int));
    for(i = 0; i < 3; i++)
    {
        printf("Enter the value of %d elements:\n",i);
        scanf("%d",&ptr[i]);
    }
            for(i = 0; i < 3; i++)
{
        printf("the value of %d elements is=%d\n",i,ptr[i]);
}
getch();
}