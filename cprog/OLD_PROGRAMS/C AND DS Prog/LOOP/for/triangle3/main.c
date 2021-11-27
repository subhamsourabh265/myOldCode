#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,r,k=1;
    printf("ENTER THE NUMBER OF ROWS\n\n");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
            printf("\n\n");

    }
    getch();
}
