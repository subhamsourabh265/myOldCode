#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("*  ");
        printf("\n\n");
    }
    getch();
}
