#include<stdio.h>
#include<conio.h>
void main()
{int arr[3][3],row=3,col=3;
clrscr();
printf("\n Keshav Gupta");
for(int i=0;i<row;i++)
{ for(int j=0;j<col;j++)
 { printf("\n element %d%d=",i+1,j+1);
scanf("%d",&arr[i][j]);}
 }
for(i=0;i<row;i++)
{for(int j=0;j<col;j++)
printf("%d",arr[i][j]);
if(j==col-1)
{printf("\n"); }
 }
getch();}
