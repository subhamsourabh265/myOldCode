#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,side;
    printf("ENTER THE SIDE LENGTH OF THE TRIANGLE\n\n");
    scanf("%d",&side);
    for(i=1;i<=side;i++)
    {
        for(j=1;j<=i;j++)
            printf(" %d ",j);
        printf("\n\n");
    }
    getch();
}
