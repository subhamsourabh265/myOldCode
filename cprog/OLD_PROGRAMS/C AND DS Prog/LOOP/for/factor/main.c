#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n;
    printf("PLZ ENTER THE NUMBER\n\n");
    scanf("%d",&n);
    printf("THE FACTORS OF %d ARE\n\n",n);
    for(i=1;i<=n;i++)
        if(n%i==0)
        printf("       %d        ",i);
    getch();
}
