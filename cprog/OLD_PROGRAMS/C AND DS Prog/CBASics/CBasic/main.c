#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,sum;
    printf("enter 1st no\n\n");
    scanf("%d",&i);
    printf("enter 2nd no\n\n");
    scanf("%d",&j);
    sum=i+j;
    printf("sum=%d+%d=%d",i,j,sum);
    getch();
}
