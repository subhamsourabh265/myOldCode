#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,r,k=1;
    printf("ENTER THE NUMBER OF ROWS\n\n");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d  ",k);
        printf("\n\n");
        k=k+1;
    }
    getch();
}
