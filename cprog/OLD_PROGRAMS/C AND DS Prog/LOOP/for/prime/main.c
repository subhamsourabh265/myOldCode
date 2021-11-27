#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,flag;
    printf("PLEASE ENTER THE NUMBER\n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
        flag=1;
        break;
    }
    else

        flag=0;
    }
        if(flag==0)
            printf("PRIME");
        else
            printf("NOT PRIME");
    getch();
}
