#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,sum=0;
    printf("PLZ ENTER THE NUMBER\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("TOTAL SUM OF EVEN NUMBERS FROM 1 TO %d is %d\n",n,sum);
    getch();
}
