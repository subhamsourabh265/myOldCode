#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,p,k,flag;
    printf("Enter  the value of n\n");
    scanf("%d",&n);
    k=pow(n,0.5);
    for(i=2;i<=k;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
            flag=1;

    }
    if(flag==1)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}
