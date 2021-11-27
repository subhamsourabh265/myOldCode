#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x,i=0;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&x);
    do
    {
        printf("%d ",i);
        i++;
    }
    while(i<x);
    getch();

}
