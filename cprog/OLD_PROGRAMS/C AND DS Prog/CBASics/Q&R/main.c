#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int x,y,quot,rem;
    printf("ENTER THE TWO NUMBERS\n");
    scanf("%d%d",&x,&y);
    quot=x/y;
    rem=x%y;
    printf("FOR THE TWO NUMBERS %d AND %d\n,QUOTIENT=%d AND REMAINDER =%d\n",x,y,quot,rem);
    getch();
}
