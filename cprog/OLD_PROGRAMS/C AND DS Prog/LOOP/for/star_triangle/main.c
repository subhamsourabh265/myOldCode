#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,r;
    printf("ENTER THE NUMBER OF ROWS\n\n");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
            printf("   *");
        printf("     \n\n");
    }
    printf(" \n");
    getch();
}
