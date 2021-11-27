#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,fact=1

    ;
    printf("plz enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("THE FACTORIAL OF %d IS \n\n%d\n\n",n,fact);
    getch();
}
