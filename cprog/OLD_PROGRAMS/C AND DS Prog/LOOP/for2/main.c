#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("ENTER THE nTH TERM\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("TOTAL SUM UPTO %d=\n%d\n",n,sum);
}
