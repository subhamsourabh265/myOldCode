#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,r,c;
    printf("ENTER THE NUMBER OF ROWS AND COLUMN\n\n");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        printf(" * ");
        printf("\n");

    }
    getch();
}
