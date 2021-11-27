#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER THE VALUE OF nTH TERM\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("TOTAL SUM OF THE NUMBERS FROM 1 TO %d\n%d\n",n,sum);
    getch();
}
