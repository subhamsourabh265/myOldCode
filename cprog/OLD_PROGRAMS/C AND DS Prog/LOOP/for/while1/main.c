#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,sum=0;printf("ENTER THE NUMBER\n");scanf("%d",&n);i=1;while(i<=n)
    {if(i%3==0||i%5==0)
    sum=sum+i;
    i++;}
    printf("SUM OF THE NUMBERS BETWEEN 1 AND %d DIVISIBLE BY 3 AND 5 BOTH=:\n%d\n",n,sum);getch();

}
